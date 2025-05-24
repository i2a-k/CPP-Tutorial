#include <iostream>
using namespace std;

/*
An Exception is an unexpected event that occurs during program execution (for example divide by zero). The process of handling these types of errors is known as exception handling.
Exceptions can be handled with the help of "try" and "catch" blocks, along with the "throw".

Syntax:

    try{
        ... //codes that may raise an exception

        throw argument; //throws an exception when an error is detected
    }

    catch (exception){ //The catch parameter (exception) takes the value passed by the throw statement.
        ... //codes that handle the exception thrown by the "throw"
    }

 Code that might throw an exception is placed in the try block. Every try block is followed by the catch block. When an exception occurs, the throw statement throws an exception,
which is caught by the catch block. The catch block cannot be used without try block.
*/

int main(){
    float num1, num2, d;
    cout << "Enter two numbers: " << endl;
    cin >> num1;
    cin >> num2;

    try{
        if (num2 == 0) throw 0;
        //We can also use the throw to output a reference number, like a custom error number/code for organizing purposes (for example: throw(505)).

        d = num1 / num2;
        cout << num1 << "/" << num2 << "=" << d << endl;
    }
    catch (int excp){
        cout << "Error: Cannot divide by " << excp << endl;
    }
    //if none of the statements in the try block generates an exception, the catch block is skipped.

    cout << endl;

    try{
        int age;
        cout << "Enter your age: " << endl;
        cin >> age;

        if (age >= 18) cout << "Access granted." << endl;
        else{
            throw (age);

        }
    }
    catch (int age){ //If we do not know the throw type used in the try block, we can use the "..." inside the catch block (catch (...)).
        cout << "You are " << age << ". Access denied. You must be at least 18 years old." << endl;
    }

    cout << endl;

    //Multiple Catch statements
    //We can use multiple catch statements for different kinds of exceptions that can result from a single block of code.
    float arr[4] = {0.0};
    int idx;

    cout << "Enter array index: " << endl;
    cin >> idx;

    try{
        //throw exception if array out of bounds
        if (idx >= 4) throw "Error: Array out of bound.";

        cout << "Enter two numbers: " << endl;
        cin >> num1;
        cin >> num2;

        if (num2 == 0) throw 0;

        arr[idx] = num1/num2;
        cout << num1 << "/" << num2 << "=" << arr[idx] << endl;
    }
    catch (const char* msg){
        cout << msg << endl;
    }
    catch (int num){
        cout << "Error: Cannot Divide by " << num << endl;
    }
    catch (...){ //catch(...) should always be the final block.
        cout << "Unexpected exception!" << endl;
    }
}

/*
C++ has provided us with a number of standard exceptions that we can use in our exception handling.
for example:
    std::exception     => the parent class of all C++ exception
    std::bad_alloc     => thrown when a dynamic memory allocation fails
    std::bad_cast      => thrown when an attempt is made to perform a dynamic_cast to an invalid type
    std::bad_exception => typically thrown when an exception is thrown and it cannot be rethrown

    there are many other standard exceptions. these exceptions are defined in the exception header file.
*/
