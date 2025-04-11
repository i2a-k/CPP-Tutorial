#include <iostream>
using namespace std;

/*
Loops: For, While, do While
Execute a block of codes as long as a specified condition is reached.

Syntax of for Loops:
for (statement 1; statement 2; statement 3){
    //code block
}
*/

int main(){
    //Example: EVEN or ODD Numbers in (1,10)
    for(int i=1; i<=10; i++)
    {
        //Tip: if a variable is defined in a loop, it will be cleared from memory after it finishes.
        if (i%2 == 0)
        {
            cout << i << " is even" << endl;
        }
        else cout << i << " is odd" << endl;
    }

    //cout << i; //Cause an Error

    //Tip: i++ and ++i are different
    int j = 1;
    cout << j++ << endl;

    int k = 1;
    cout << ++k << endl;
}