////task no 1
//#include <iostream>
//namespace std;
//
//template <typename T>
//class AbstractStack {
//public:
//    virtual void push(T value) = 0;
//    virtual T pop() = 0;
//    virtual T top() const = 0;
//    virtual bool isEmpty() const = 0;
//    virtual bool isFull() const = 0;
//
//    virtual ~AbstractStack() {}SS
//};
//
//template <typename T>
//class childclass : public AbstractStack<T> {
//    T* arr;
//    int capacity;
//    int index;
//
//public:
//    childclass(int size) {
//        capacity = size;
//        arr = new T[capacity];
//        index = -1;
//    }
//
//    void push(T value) override {
//        if (isFull()) {
//            cout << "Stack is full!" << endl;
//        }
//        else {
//            index++;
//            arr[index] = value;
//            cout << value << " pushed into stack." << endl;
//        }
//    }
//
//    T pop() override {
//        if (isEmpty()) {
//            cout << "Stack is empty!" << endl;
//            return T();
//        }
//
//        T value = arr[index];
//        index--;
//        return value;
//    }
//
//    T top() const override {
//        if (isEmpty()) {
//            cout << "Stack is empty!" << endl;
//            return T();
//        }
//
//        return arr[index];
//    }
//
//    bool isEmpty() const override {
//        return index == -1;
//    }
//
//    bool isFull() const override {
//        return index == capacity - 1;
//    }
//
//    void display() const {
//        if (isEmpty()) {
//            cout << "Stack is empty!" << endl;
//            return;
//        }
//
//        cout << "Stack elements (Top to Bottom):" << endl;
//
//        for (int i = index; i >= 0; i--) {
//            cout << arr[i] << endl;
//        }
//    }
//
//    ~childclass() {
//        delete[] arr;
//    }
//};
//
//int main() {
//    int size;
//
//    cout << "Enter the maximum size: ";
//    cin >> size;
//
//    if (size <= 0) {
//        cout << "Invalid size!" << endl;
//        return 0;
//    }
//
//    childclass<int> s1(size);
//
//    int choice, value;
//
//    do {
//        cout << "\n===== STACK MENU =====" << endl;
//        cout << "1. Push element" << endl;
//        cout << "2. Pop element" << endl;
//        cout << "3. Top element" << endl;
//        cout << "4. Check if empty" << endl;
//        cout << "5. Check if full" << endl;
//        cout << "6. Display elements" << endl;
//        cout << "0. Exit" << endl;
//
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter value: ";
//            cin >> value;
//            s1.push(value);
//            break;
//
//        case 2:
//            if (!s1.isEmpty()) {
//                cout << "Popped element: " << s1.pop() << endl;
//            }
//            else {
//                cout << "Stack is empty!" << endl;
//            }
//            break;
//
//        case 3:
//            if (!s1.isEmpty()) {
//                cout << "Top element: " << s1.top() << endl;
//            }
//            else {
//                cout << "Stack is empty!" << endl;
//            }
//            break;
//
//        case 4:
//            if (s1.isEmpty())
//                cout << "Stack is empty." << endl;
//            else
//                cout << "Stack is not empty." << endl;
//            break;
//
//        case 5:
//            if (s1.isFull())
//                cout << "Stack is full." << endl;
//            else
//                cout << "Stack is not full." << endl;
//            break;
//
//        case 6:
//            s1.display();
//            break;
//
//        case 0:
//            cout << "Program ended." << endl;
//            break;
//
//        default:
//            cout << "Invalid choice! Try again." << endl;
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}
////task no 2
//#include <iostream>
//using namespace std;
//
//template <typename T>
//class AbstractStack {
//public:
//    virtual void push(T value) = 0;
//    virtual T pop() = 0;
//    virtual T top() const = 0;
//    virtual bool isEmpty() const = 0;
//    virtual bool isFull() const = 0;
//    virtual ~AbstractStack() {}
//};
//
//template <typename T>
//class myStack : public AbstractStack<T> {
//private:
//    T* arr;
//    T* minArr;
//    int capacity;
//    int index;
//    int minIndex;
//
//public:
//
//    myStack(int size) {
//        capacity = size;
//        arr = new T[capacity];
//        minArr = new T[capacity];
//        index = -1;
//        minIndex = -1;
//    }
//    void push(T value) override {
//        if (isFull()) {
//            cout << "Stack is full!" << endl;
//            return;
//        }
//
//        index++;
//        arr[index] = value;
//        if (minIndex == -1 || value <= minArr[minIndex]) {
//            minIndex++;
//            minArr[minIndex] = value;
//        }
//
//        cout << value << " pushed into stack." << endl;
//    }
//
//    T pop() override {
//        if (isEmpty()) {
//            cout << "Stack is empty!" << endl;
//            return T();
//        }
//
//        T value = arr[index];
//
//        if (value == minArr[minIndex]) {
//            minIndex--;
//        }
//
//        index--;
//        return value;
//    }
//    T top() const override {
//        if (isEmpty()) {
//            cout << "Stack is empty!" << endl;
//            return T();
//        }
//
//        return arr[index];
//    }
//
//    bool isEmpty() const override {
//        return index == -1;
//    }
//
//    bool isFull() const override {
//        return index == capacity - 1;
//    }
//
//    T getMin() const {
//        if (isEmpty()) {
//            cout << "Stack is empty!" << endl;
//            return T();
//        }
//
//        return minArr[minIndex];
//    }
//
//    void display() const {
//        if (isEmpty()) {
//            cout << "Stack is empty!" << endl;
//            return;
//        }
//
//        cout << "Stack elements (Top to Bottom):" << endl;
//
//        for (int i = index; i >= 0; i--) {
//            cout << arr[i] << endl;
//        }
//    }
//    ~myStack() {
//        delete[] arr;
//        delete[] minArr;
//    }
//};
//
//int main() {
//    int size;
//
//    cout << "Enter maximum stack size: ";
//    cin >> size;
//
//    if (size <= 0) {
//        cout << "Invalid stack size!" << endl;
//        return 0;
//    }
//
//    myStack<int> s(size);
//
//    int choice, value;
//
//    do {
//        cout << "1. Push element" << endl;
//        cout << "2. Pop element" << endl;
//        cout << "3. Show top element" << endl;
//        cout << "4. Check if stack is empty" << endl;
//        cout << "5. Check if stack is full" << endl;
//        cout << "6. Display stack elements" << endl;
//        cout << "7. Show minimum element" << endl;
//        cout << "8. Exit" << endl;
//
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter value: ";
//            cin >> value;
//            s.push(value);
//            break;
//
//        case 2:
//            if (!s.isEmpty()) {
//                cout << "Popped element: "
//                    << s.pop() << endl;
//            }
//            else {
//                cout << "Stack is empty!" << endl;
//            }
//            break;
//
//        case 3:
//            if (!s.isEmpty()) {
//                cout << "Top element: "
//                    << s.top() << endl;
//            }
//            else {
//                cout << "Stack is empty!" << endl;
//            }
//            break;
//
//        case 4:
//            if (s.isEmpty())
//                cout << "Stack is empty." << endl;
//            else
//                cout << "Stack is not empty." << endl;
//            break;
//
//        case 5:
//            if (s.isFull())
//                cout << "Stack is full." << endl;
//            else
//                cout << "Stack is not full." << endl;
//            break;
//
//        case 6:
//            s.display();
//            break;
//
//        case 7:
//            if (!s.isEmpty()) {
//                cout << "Minimum element: "
//                    << s.getMin() << endl;
//            }
//            else {
//                cout << "Stack is empty!" << endl;
//            }
//            break;
//
//        case 8:
//            cout << "Program ended." << endl;
//            break;
//
//        default:
//            cout << "Invalid choice! Try again." << endl;
//        }
//
//    } while (choice != 8);
//
//    return 0;
//}
////Task no 3
//#include <iostream>
//#include <string>
//using namespace std;
//
//class myCarStack {
//private:
//    string cars[8];
//    int topIndex;
//
//public:
//    myCarStack() {
//        topIndex = -1;
//    }
//
//    bool isEmpty() {
//        return topIndex == -1;
//    }
//
//    bool isFull() {
//        return topIndex == 7;
//    }
//
//    int totalCars() {
//        return topIndex + 1;
//    }
//
//    void push(string carNo) {
//        if (isFull()) {
//            cout << "Parking is full! No space available.\n";
//        }
//        else {
//            topIndex++;
//            cars[topIndex] = carNo;
//            cout << "Car " << carNo << " parked successfully.\n";
//        }
//    }
//
//    string pop() {
//        if (isEmpty()) {
//            return "";
//        }
//
//        string carNo = cars[topIndex];
//        topIndex--;
//        return carNo;
//    }
//
//    string top() {
//        if (isEmpty()) {
//            return "";
//        }
//
//        return cars[topIndex];
//    }
//
//    bool search(string carNo) {
//        for (int i = 0; i <= topIndex; i++) {
//            if (cars[i] == carNo) {
//                return true;
//            }
//        }
//        return false;
//    }
//
//    void display() {
//        if (isEmpty()) {
//            cout << "Parking lot is empty.\n";
//            return;
//        }
//
//        cout << "\nParked Cars (Top to Bottom):\n";
//
//        for (int i = topIndex; i >= 0; i--) {
//            cout << cars[i] << endl;
//        }
//    }
//
//    void removeCar(string carNo) {
//        if (isEmpty()) {
//            cout << "Parking lot is empty!\n";
//            return;
//        }
//
//        myCarStack temp;
//        bool found = false;
//
//        while (!isEmpty()) {
//            if (top() == carNo) {
//                pop();
//                found = true;
//                break;
//            }
//
//            temp.push(pop());
//        }
//
//        while (!temp.isEmpty()) {
//            push(temp.pop());
//        }
//
//        if (found) {
//            cout << "Car " << carNo
//                << " removed successfully.\n";
//        }
//        else {
//            cout << "Car " << carNo
//                << " not found in parking lot.\n";
//        }
//    }
//};
//
//int main() {
//    myCarStack parking;
//    int choice;
//    string carNo;
//
//    do {
//        cout << "\n===== PARKING LOT MANAGEMENT =====\n";
//        cout << "1. Park a new car\n";
//        cout << "2. Remove a car\n";
//        cout << "3. View top car\n";
//        cout << "4. Display all parked cars\n";
//        cout << "5. Total cars parked\n";
//        cout << "6. Search for a car\n";
//        cout << "7. Exit\n";
//
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter car number: ";
//            cin >> carNo;
//
//            if (parking.search(carNo)) {
//                cout << "This car is already parked!\n";
//            }
//            else {
//                parking.push(carNo);
//            }
//            break;
//
//        case 2:
//            cout << "Enter car number to remove: ";
//            cin >> carNo;
//            parking.removeCar(carNo);
//            break;
//
//        case 3:
//            if (parking.isEmpty()) {
//                cout << "Parking lot is empty.\n";
//            }
//            else {
//                cout << "Top car: "
//                    << parking.top() << endl;
//            }
//            break;
//
//        case 4:
//            parking.display();
//            break;
//
//        case 5:
//            cout << "Total cars parked: "
//                << parking.totalCars() << endl;
//            break;
//
//        case 6:
//            cout << "Enter car number to search: ";
//            cin >> carNo;
//
//            if (parking.search(carNo)) {
//                cout << "Car " << carNo
//                    << " is present in parking lot.\n";
//            }
//            else {
//                cout << "Car not found.\n";
//            }
//            break;
//
//        case 7:
//            cout << "Program ended.\n";
//            break;
//
//        default:
//            cout << "Invalid choice! Try again.\n";
//        }
//
//    } while (choice != 7);
//
//    return 0;
//}
////Task no 4
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string text = "", oldText = "", redoText = "";
//    int choice;
//
//    do {
//        cout << "\n1. Type text\n";
//        cout << "2. Delete last character\n";
//        cout << "3. Undo\n";
//        cout << "4. Redo\n";
//        cout << "5. Show text\n";
//        cout << "6. Exit\n";
//        cout << "Enter choice: ";
//        cin >> choice;
//
//        if (choice == 1) {
//            oldText = text;
//            cout << "Enter text: ";
//            cin >> text;
//            redoText = "";
//        }
//        else if (choice == 2) {
//            if (text != "") {
//                oldText = text;
//                text.pop_back();
//                redoText = "";
//            }
//        }
//        else if (choice == 3) {
//            redoText = text;
//            text = oldText;
//        }
//        else if (choice == 4) {
//            oldText = text;
//            text = redoText;
//        }
//        else if (choice == 5) {
//            cout << "Text: " << text << endl;
//        }
//
//    } while (choice != 6);
//
//    return 0;
//}
