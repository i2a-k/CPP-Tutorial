/*
Escape Characters in strings (".....")
\' => single quote
\" => double quote
\\ => backslash
\a => audible bell
\b => backspace
\f => new page
\n => new line
\r => carriage return
\t => horizontal tab
\v => vertical tab
*/

#include <iostream>
using namespace std;

int main(){

    cout << "\aIntroduction to\nC++\n" << "Hello\t\tWorld!\n";
    cout << "\' , \" , \\\n";
    cout << "Science\nand\nResearch\n";
    cout << "SRB\t\t\t\tBranch";
}