/*
Variables:
<type> <identifier>; (initialization)


Types: int, float, char, double, bool
int => integer => 2 Bytes, Example: (-inf,inf), Example: int number = 5;
float => 4Bytes => Example: float pi = 3.14;
double => 8Bytes => Example: double number = 2.558484543534313215;
char => character => 1Byte => (-127,127) => ASCI, Example: char ch = 'A';
bool => boolean => 1 bit => True (!=0), False (0), Example: bool st = true;


Identifiers: (a-z, A-Z, Underscore, 0-9)

Valid Examples: Number1, NumberOne, Number_One, _Number
Invalid Examples: 1Number, Number One
32 keywords is reserved for c++, like: int, float, for, if, break, continue, ... => int for = 5; => invalid!
*/

#include <iostream>
using namespace std;

int main(){

    int _num1; //2Bytes (-32768,32768)
    //int for = 1; //This causes an error
    _num1 = 15;
    cout << _num1 << endl; //endl places a return in output (next output is shown in new line).

    int num2 = 5.25;
    float num3 = 5.25; //4Bytes
    float num4 = 7;
    cout << num2 << ", " << num3 << ", " << num4 << endl;

    char ch1 = 'A'; //1Byte (ASCI) , (-127,127)
    char ch2 = 'AmirAli'; //Last character stores in ch2
    cout << ch1 << ", " << ch2 << endl;

    bool st1 = true; //1bit, True = 1, False = 0
    bool st2 = false;
    cout << st1 << ", " << endl;

    float num5 = 10.789465;
    double num6 = 10.789465; //8Bytes
    cout << num5 << ", " << num6 << endl;

    int num7 = 0b01011101; //Binary
    int num8 = 0342; //Octal
    int num9 = 0x2AB3; //Hexadecimal
    float num10 = -23.47e5;
    cout<< num7 << ", " << num8 << ", " << num9 << ", " << num10 << endl;
}