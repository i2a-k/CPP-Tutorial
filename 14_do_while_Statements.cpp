#include <iostream>
using namespace std;

/*
Syntax of do while loops:
do{...} while();
*/
int main(){
    //Example: Computing factorial of a number
    int i=1, fa=1 , number;
    cout << "Enter a positive integer number: " << endl;
    cin >> number;

    if (number >= 1){
        do{
            fa = fa * i;
            i++;
        } while(i <= number);

        cout << number << "! = " << fa;
    }
    else cout << "The number is invalid!\n";

    //Tip: do while loop will execute at least once, even if the condition is not met (false).
}