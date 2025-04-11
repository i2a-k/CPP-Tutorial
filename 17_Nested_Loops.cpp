#include <iostream>
using namespace std;

/*
Nested Loops:
Placing a loop inside another loop.
The inner loop, will be executed for each iteration of the outer loop.
*/

int main(){
    //Example: Times table
    for (int i=1; i<=10; i++) //Execute 10 times
    {
        for (int j=1; j<=10; j++) //Execute 100 times
        {
            cout << i << " * " << j << " = " << i*j << ",  ";
            if (j == 10) cout << "\n";
        }
    }
}