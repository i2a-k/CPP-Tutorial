#include <iostream>
using namespace std;

/*
In functions chapter, we learned how to pass arguments to a function
There is another way of passing arguments called pass by reference (passing the references of actual parameters rather than actual value)

Consider the following example:
void func1 (int val){
    ...
}

void func2 (int& ref){
    ...
}

int main(){
    int var = x;

    func1(var); //pass by actual value
    func2(var); //pass by reference
}
*/

void swapVals(int& val1, int& val2){
    int temp;
    temp = val1;
    val1 = val2;
    val2 = temp;
}

int main(){
    int n1 = 0, n2 = 1;
    cout << n1 << ", " << n2 << endl;
    swapVals(n1, n2); //Swap the addresses
    cout << n1 << ", " << n2 << endl;

    /*
    The above task can be done using the pointers (pass by pointers)
    void swapVals(int* val1, int* val2)
    A dereference operator (*) must be used every time to access the values, so generally pass by reference is easier
    Then pass by pointers is discouraged.
    */
}
