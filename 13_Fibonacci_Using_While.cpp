#include <iostream>
using namespace std;

//Fibonacci Sequence using while loop
int main (){
    int n0=0, n1=1 , N, sum;
    cout <<"Enter a number: ";
    cin >> N;

    while (n1<=N){
        sum = n0 + n1;
        cout << n1 << " ,";
        n0 = n1;
        n1 = sum;
    }
}