#include <iostream>

using namespace std;

int main() {
    int num = 76;
    int* ptr = &num;

    cout << "Basic Pointers" << endl;
    cout << "Value of num: " << num << endl;
    cout << "Address of num (&num): " << &num << endl;
    cout << "Value stored in ptr (address): " << ptr << endl;
    cout << "Value pointed to by ptr (*ptr): " << *ptr << endl;
    cout << endl;


    int** ptrToPtr = &ptr;

    cout << "Levels of Indirection " << endl;
    cout << "Level 0 (Value of num): " << num << endl;
    cout << "Level 1 (Dereference ptr - *ptr): " << *ptr << endl;
    cout << "Level 2 (Dereference ptrToPtr twice - **ptrToPtr): " << **ptrToPtr << endl;
    cout << "Address of ptr: " << &ptr << endl;
    cout << "Value in ptrToPtr: " << ptrToPtr << endl;
    cout << endl;

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* dynamicArray = new int[size];

    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i << ": ";
        cin >> *(dynamicArray + i); 
    }
    cout << endl;
    
    for (int i = 0; i < size; ++i) {
        cout << "Value: " << *(dynamicArray + i) << " Address: " << (dynamicArray + i) << endl;
    }
    cout << endl;

    delete[] dynamicArray;
    dynamicArray = nullptr;

    cout << "Memory successfully freed." << endl;

    return 0;
}