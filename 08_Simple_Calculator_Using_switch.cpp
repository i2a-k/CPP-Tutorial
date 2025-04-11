#include <iostream>
using namespace std;
//Example: A simple CALCULATOR using switch statements
int main(){
  int  num1, num2, op;
  cout <<"Enter first number: ";
  cin >> num1;

  cout <<"Enter second number: ";
  cin >> num2;

  cout <<"Specify the desired operation: 1(+) 2(-) 3(/) 4(*): ";
  cin >> op;

  switch(op){
    case 1: cout<< num1 + num2;
        break;

    case 2: cout<< num1 - num2;
        break;

    case 3: cout << num1 / num2;
        break;

    case 4: cout << num1 * num2;
        break;

    default: cout<<"Invalid operation! \n";
  }
}