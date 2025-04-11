#include <iostream>
using namespace std;

/*
Switch statements

Syntax:
switch (expression){
    case x: {code block} //if x in expression is true ...
        break;
    case y: {code block} //if y in expression is true ...
        break;
    default: {block} //same as else
*/

int main(){
    //Example: EVEN or ODD
    int num;
    cout << "Enter a number: ";
    cin >> num;

    switch(num%2){
        case 0:
            cout << "Even";
        break;

        default:
            cout << "Odd";
    }

}