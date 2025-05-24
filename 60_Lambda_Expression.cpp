#include <iostream>
#include <math.h>
using namespace std;

/*
 Lambda expression allows us to define anonymous function objects. Lambda function is a small function we can write directly in codes. It's useful when we need a quick function without
naming it or declaring it separately.

Syntax:
    auto name = [capture] (parameters) {codes};

Note: Like normal functions, lambda expressions can also have a return type.

Example:
    int main(){
        auto message = [](){cout << "Lambda" << endl;} //Create a lambda function and assign it to a variable name (message) without parameters that prints "Lambda".
        message();
    }
*/

//Passing lambdas to functions
#include <functional>

void myFunc(function<void()> func){
    func();
    func();
    func();
}

int main(){
    auto add = [] (int a, int b){
        return a+b;
    };

    int sum;

    sum = add(1234, 4567);
    cout << sum << endl;


    auto multiple = [] (int a, int b) -> double{
        return a*b;
    };

    int mtp;

    mtp = multiple(2222, 3333);
    cout << mtp << endl;

    cout << endl;

    //Lambdas in loops
    for (int i=0; i<4; i++){
        auto print = [i](){
            cout << "Number " << i << endl;
        };
        print();
    }

    cout << endl;

    //Access to variables outside of lambdas
    int num1 = 70;
    int num2 = 120;

    auto myLambda = [num1, num2](){ //num1 and num2 are read-only
        cout << sin(num1) + cos(num2) << endl;
    };

    myLambda();

    cout << endl;

    //Using lambdas as an argument
    myFunc(myLambda);
}
