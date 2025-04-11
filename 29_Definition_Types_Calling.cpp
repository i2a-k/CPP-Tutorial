#include <iostream>
#include <ctime>
using namespace std;

/*
Function:
A block of codes which only runs when it is called.
Functions are useful for breaking up a large program to make it easier to read and maintain.
They are also useful if find yourself writing the same code at several different points in your program.
Functions can be used to create certain actions, utilities, math functions, etc.

Syntax:
return_type_value function_name (parameter_list) {code block or body of function}
Information can be passed to functions as a parameter. parameters are specified inside the parentheses, and be separated with comma (,).
When a parameter is passed to the function, it is called an argument.

Types of functions:
without input and output      => void function_name(void){}
with input and no output      => void function_name(parameters){... return_value}
without input and with output => type function_name(void){}
with input and output         => type function_name(parameters){... return_value}

Calling a function:
To call a function, write the function's name followed by two parentheses () and a semicolon; inside the main function.

Note: main is a pre-defined function in C++, which is used to execute code.

*/

//Example:
void myFunction(){
    //no input, no output
    cout << "My first function!" << endl;
}

void minimum(int i, int j){
    //with input (i, j parameters), no output
    int Min = 0;
    if (i <= j) Min = i;
    else Min = j;
    cout << "Minimum = " << Min << endl;
}

int negativeRandom(){
    //no input, with output
    srand(time(0));
    int myRand = rand();
    return myRand * (-1);
}

double factorial(int num){
    //with input and output
    double fa=1;
    int i=1;

    if (num >= 1){
        do{
            fa = fa * i;
            i++;
        } while(i <= num);
    }
    return fa;
}

//Note: if a user-defined function, such as myFunction() is declared after the main(), an error will occur
//Tip: it is possible to separate the declaration and the definition of the function. (declaration above main(), and definition below main())
void fibonacci(int N); //Function declaration


int main(){
    //Calling a function
    myFunction();

    //a function can be called multiple times
    myFunction();
    myFunction();

    minimum(10, 20); //10 and 20 are arguments

    int myRand = negativeRandom();
    cout << "Random number = " << myRand << endl;

    int f;
    int number = 5;
    f = factorial(number); //cout << factorial(number)
    cout << number << "! = " << f << endl;

    int N = 100;
    fibonacci(N);
    cout << endl;
}

void fibonacci(int N){

    int n0=0, n1=1, sum;

    while (n1<=N){
        sum = n0 + n1;
        cout << n1 << " ,";
        n0 = n1;
        n1 = sum;
    }
}