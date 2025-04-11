#include <iostream>
using namespace std;

/*
Syntax of while Loops:
while (condition){
    //code block
}
*/
int main(){
    //Previous example using while loop
    int i=1;
    while (i<101){
        if (i%7 == 0)
        cout << i << endl;
        i++;
    }
    //Tip: Unlike for loops, in while loops, the termination condition must be built into its block of codes
}