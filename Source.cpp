//#include <iostream>
//using namespace std;
//
//template <typename T>
//void printarray(T A[], int size) {
//    for (int i = 0; i < size; i++) {
//        cout << A[i] << " ";
//    }
//    cout << endl;
//}
//
//template <typename T>
//void selectionarrray(T A[], int size) {
//
//    for (int i = 0; i < size - 1; i++) {
//
//        int small = i;
//
//        for (int j = i + 1; j < size; j++) {
//
//            if (A[j] < A[small]) {
//                small = j;
//            }
//        }
//
//        swap(A[i], A[small]);
//    }
//}
//
//int main() {
//
//    int intarray[5] = { 1, 3, 4, 5, 6 };
//
//    cout << "Original Array:" << endl;
//    printarray(intarray, 5);
//
//    selectionarrray(intarray, 5);
//
//    cout << "Sorted Array:" << endl;
//    printarray(intarray, 5);
//
//
//    string stringarray[4] = {
//        "apple",
//        "orange",
//        "grapes",
//        "banana"
//    };
//
//    cout << "\nOriginal array:" << endl;
//    printarray(stringarray, 4);
//
//    selectionarrray(stringarray, 4);
//
//    cout << "Sorted array:" << endl;
//    printarray(stringarray, 4);
//
//    return 0;
//}
//#include<iostream>
//#include<cstring>
//using namespace std;
//template<typename T>
//int  linearsearch(T A[], int size, T key) {
//	for (int i = 0; i < size; i++) {
//		if (A[i] == key) {
//			return i;
//		}
//	}
//	return -1;
//}
//template<typename T>
//void result(int index, T key) {
//	if (index != -1) {
//		cout<<"found at key:" << key << "found at index:" << index << endl;
//	}
//	else {
//		cout << "not found:" << endl;
//	}
//}
//int main()
//{
//	int array[4] = { 1,23,35,56};
//	int intkey = 23;
//
//	int index = linearsearch(array,4, intkey);
//	result(index, intkey);
//
//	string stringarray[4] = { "apple","grapes","banana","orange" };
//	string key = "apple";
//	int stringindex = linearsearch(stringarray,4, key);
//	result(stringindex, key);
//	return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//template <typename T>
//int search(T A[], int size, T key) {
//
//    int low = 0;
//    int high = size - 1;
//
//    while (low <= high) {
//
//        int mid = (low + high) / 2;
//
//        if (A[mid] == key) {
//            return mid;
//        }
//        else if (A[mid] < key) {
//            low = mid + 1;
//        }
//        else {
//            high = mid - 1;
//        }
//    }
//
//    return -1;
//}
//
//template <typename T>
//void result(int index, T key) {
//
//    if (index != -1) {
//        cout << "Found " << key << " at index: "
//            << index << endl;
//    }
//    else {
//        cout << key << " not found" << endl;
//    }
//}
//
//int main() {
//
//    int intArray[5] = { 11, 12, 22, 25, 64 };
//    int intKey = 22;
//
//    int intIndex = search(intArray, 5, intKey);
//    result(intIndex, intKey);
//
//
//    float floatArray[4] = { 0.57, 1.62, 2.71, 3.14 };
//    float floatKey = 2.71;
//
//    int floatIndex = search(floatArray, 4, floatKey);
//    result(floatIndex, floatKey);
//
//
//    string stringArray[4] = {
//        "apple",
//        "banana",
//        "grape",
//        "orange"
//    };
//
//    string stringKey = "grape";
//
//    int stringIndex = search(stringArray, 4, stringKey);
//    result(stringIndex, stringKey);
//
//    return 0;
//}
