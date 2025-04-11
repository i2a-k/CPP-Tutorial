#include <iostream>
using namespace std;

long int factorial(int);
long int power(int, int);
int fib(int);
int gcd(int, int);

int main(){
    cout << factorial(4) << endl;
    cout << power(2, 3) << endl;
    cout << fib(5) << endl;
    cout << gcd(18, 12) << endl;
}

long int factorial(int n){
    if(n<=1) return 1;
    else return (n*factorial(n-1));
}

long int power(int x, int y){
    if(y==1) return x;
    else return x*power(x, y-1);
}

int fib(int n){
    if(n==0 || n==1) return n;
    else return fib(n-1)+fib(n-2);
}

int gcd(int a, int b){
    if(a%b==0) return b;
    else return gcd(b, a%b);
}