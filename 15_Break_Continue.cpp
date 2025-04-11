#include <iostream>
using namespace std;

/*
Break and Continue:
break statement can be used to jump out of a loop.
continue statement breaks one iteration and continues with the next iteration in the loop.
*/
int main(){
    for(int i=1; i<=10; i++)
    {
        if(i%5==0)
        {
            continue;
        }
        cout << i << endl;
    //this loop skips over the multiples of 5 (5 , 10).
    }

    cout << endl;

    for(int i=1; i<=10; i++)
    {
        if(i%7==0)
        {
            break;
        }
        cout << i << endl;
    //this loop prints until 7 and then jumps out.
    }

}