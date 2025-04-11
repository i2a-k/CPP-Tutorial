#include <iostream>
using namespace std;

/*Conditions and IF Statements
Using different actions for different decisions using conditions

Syntax:
if (condition){block of codes if the condition is TRUE}
*/
int main(){
    //Example: Checking whether a number is EVEN or ODD
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number%2 == 0) cout << "Even\n";
    if (number%2 != 0) cout << "Odd\n";

    /*
    if (condition){...}
      else {...}
    */

    //EVEN or ODD using if else
    //if (number%2 == 0) cout << "Even\n";
    //else cout << "Odd\n";

    //Example: Checking whether a number divisible by 6
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if ((num%2 == 0) && (num%3 == 0)) cout << num << " is divisible by 6. \n";
    else cout << num << " is not divisible by 6. \n";

    /*
    if (condition){...}
    else if (condition) {...}
    else {...}
    */
    //Example:
    int time_h;
    cout << "Time: \n";
    cin >> time_h;
    if (time_h <= 10){
        cout << "Good Morning!\n";
    }
    else if (time_h < 20 && time_h > 10){
        cout << "Good Day!\n";
    }
    else {
        cout << "Good Evening!\n";
    }
}