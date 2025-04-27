#include <iostream>
using namespace std;

/*
Allocating and Deallocating the memory:

In other high level programming languages such as java and python, the compiler automatically manages the memories allocated to variables
C++ allows to allocate the memory dynamically in run time. In C++, should to deallocate memory after we have no use for the variables

The memory can be allocated and deallocated dynamically using "new" and "delete" operators

Syntax:
type* pointer = new type{value};
delete pointer;
*/

int main(){
    //float* pVar;
    //pVar = new float; //Dynamically allocating memory using "new" keyword
    //*pVar = 45.58; //Assigning an integer value to allocated memory
    //Note: The new expression returns the address of the memory location, which is why a pointer is used

    float* pVar = new float{45.58}; //Same as 18-20 Lines
    //Tip: Using the above syntax avoids uninitialized pointers. Uninitialized pointers may cause undefined behavior when dereferenced

    cout << pVar << ", " << *pVar << endl;

    delete pVar; //the memory occupied by the pointer variable can be deallocated, when it's no longer usable
    //Tip: Proper use of the delete is essential to prevent memory leaks and ensure efficient memory management.

    cout << pVar << ", " << *pVar << endl;

    pVar = nullptr; //Null Pointer: Avoiding undefined behavior if pointer is dereferenced

    cout << pVar << endl;

    //Memory management in Arrays (calculating average of grades):
    float* ptrAr;
    ptrAr = new float[4]; //4 Students
    float* pVar2 = new float{0};

    cout << "Enter the grades of students: " << endl;
    for(int i=0; i<4; i++){
        cin >> *(ptrAr + i);
    }

    for(int i=0; i<4; i++){
        *pVar2 += *(ptrAr + i);
    }

    cout << "The Average = " << (*pVar2)/4 << endl;

    delete[] ptrAr; //[] denotes that the memory deallocation is for an array.
    ptrAr = nullptr;

    delete pVar2;
    pVar2 = nullptr;
}
