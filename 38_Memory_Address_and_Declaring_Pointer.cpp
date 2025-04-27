#include <iostream>
using namespace std;

//Every variable has an associated location in the memory (memory address of variable)
int main(){
    int var1 = 1;  //Any data type (int, float, string, ...)
    int var2 = 5;
    int var3 = 55;
    int var4 = -16;

    //&var return var's memory address in the hexadecimal form: 0x at the beginning (it's called reference)
    cout << &var1 << "\n" << &var2 << "\n" << &var3 << "\n" << &var4 << endl;
    //Results may vary by different environments

    /*
    Pointers:
    int *var; OR int* var; is a pointer to var (the second way is the preferred syntax for declaring a pointer)
    An address can be assigned to a pointer. int* var = &var;
    */

    int var = 3;
    int* pVar = &var; //Cannot do *pVar = &var;

    cout << "Pointer to address: " << pVar << endl;
    //When * is used with pointers, it returns the value pointed by the address (it's called dereference)
    cout << "Value pointed by address stored in pointer: " << *pVar << endl;

    //The value of a variable can be changed using it's pointer
    *pVar = 9;
    cout << "Changed value of var using pointer: " << var << endl;

    /*Note:
        &var and pVar are addresses
        var and *pVar are values

                                var          *pVar
                                 5     <====   5

          pVar                  &var
        0x61fe04   =====>     0x61fe04
    */

    //Not only can a pointer store the address of a single variable, it can also store the address of cells of an array
    int myArray[5] = {1, 2, 3, 4, 5};
    int* pArray;
    //pArray = &myArray[0]; //address of first element. &myArray[1] for second element and so on.
    pArray = myArray; //It stores the address of the first element of the array (same as the above line)
    cout << pArray << ", " << *pArray << endl;

    //pArray + 1 will point to the second element's address
    cout << pArray + 1 << ", " << *(pArray + 1) << endl;

    //Example:
    int A[3];
    cout << "Enter five digits: " << endl;
    for (int i=0; i<3; i++){
        cin >> *(A + i); //Similar to cin >> A[i];
        //Tip: The array name (A) points to the first element, so A can be acting like a pointer
    }

    cout << "Displaying the data and it's addresses: " << endl;
    for (int i=0; i<3; i++){
        cout << *(A + i) << ", " << &A[i] << endl;
    }

}
