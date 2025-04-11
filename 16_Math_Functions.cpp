#include <iostream>
#include <cmath> //or <math.h> //Mathematical functions
using namespace std;

int main(){
    //Using some functions within the math library

    int x = 4;
    int y = -3;
    float n = 3.35;

    cout << abs(y) << endl; //absolute value. or fabs()
    cout << ceil(n) << endl; //nearest integer (upper)
    cout << floor(n) << endl; //nearest integer (lower)
    cout << sqrt(x) << endl; //square root
    cout << round(n) << endl; //nearest integer
    cout << pow(x,2) << endl; //x to power of n
    cout << log(x) << endl; //natural log. log10(x) => base 10, log2(x) => base 2
    //sin(x), cos(x), exp(x), ...
}