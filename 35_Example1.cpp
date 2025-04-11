#include <iostream>
#include <math.h>

using namespace std;

//Calculator with 3 operation: (a^2,[a],a%b), using switch statements.
int main(){
    int op;
    cout << "Enter the operation: " << endl;
    cin >> op; //^ => 1, [] => 2, % => 3

    switch(op){
        case 1: {
            float n;
            cout << "Enter the number: " << endl;
            cin >> n;
            cout << n*n;
        }
        break;

        case 2: {
            float n;
            cout << "Enter the number: " << endl;
            cin >> n;
            cout << floor(n);
        }
        break;

        case 3: {
            int n;
            int m;
            cout << "Enter the numbers: " << endl;
            cin >> n;
            cin >> m;
            cout << n%m;
        }
        break;

        default: cout << "Wrong Input" << endl;
    }
}