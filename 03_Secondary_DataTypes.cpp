/*
Secondary variable types:

short int => 2Bytes => short int number;
signed int => 2Bytes => signed int number;
unsigned int => Positive => unsigned int number = 256; or int 256U;
unsigned char => (0,255) => unsigned char ch;
long int => 4Bytes => long int number = 24; or int 24L;
long double => 16Bytes

*/

#include <iostream>
using namespace std;

int main(){
    int num1 = -5;
    unsigned int num2 = -5;
    cout << num1 << ", " << num2 << endl;

    long int num3 = 999999999;
    //int num3 = 999999999; //in C++ by default initializes by long
    cout << num3 << endl;
}