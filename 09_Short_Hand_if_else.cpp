#include <iostream>
using namespace std;

/*
Short hand if .. else

Syntax:
variable = (condition) ? expressionTrue : expressionFalse;

*/
int main(){
    int gradesAvg;
    char C;
    cout << "Enter your grades' average: ";
    cin >> gradesAvg;
    C = (gradesAvg >= 12) ? 'N' : 'P';
    cout << C;
}