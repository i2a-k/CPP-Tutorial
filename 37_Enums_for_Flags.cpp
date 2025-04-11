#include <iostream>
using namespace std;

//Example: Setting Flags (italics, bold, underline) for a button in an application.
enum flags {
        //We can combine two or more flags at once without overlapping using bitwise OR.
        //So two or more flags can be chosen.
        Italics = 1,    //00000001
        Bold = 2,       //00000010
        Underline = 4   //00000100
} button;

int main(){
    //int btnDesign = Bold | Underline;
    int btnDesign = Italics | Bold;
    //int btnDesign = Underline;
    //   00000010
    // | 00000100
    // ___________
    //   00000100

    cout << btnDesign;
}