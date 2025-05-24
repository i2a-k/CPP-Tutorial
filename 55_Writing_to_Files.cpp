#include <fstream>
#include <iostream>
using namespace std;

int main(){
    ofstream myFile("sample.txt"); //if the file exists, it's contents will be deleted.

    if(myFile.fail()) {
        cout << "Error: Unable to open!" << endl;
        return 0;
    }

    //We can write to a txt file by using the insertion operator "<<" with the ofstream object
    myFile << "AAAAA" << endl;
    myFile << "BBBBB" << endl;
    myFile << "CCCCC" << endl;

    myFile.close();

    //To modify (append a text) a file, we need to open the file in append mode.
    ofstream myFile2("sample.txt", ios::app);
    myFile2 << "DDDDD" << endl;

    myFile2.close();

    /*
    Manipulators on insertion:
    Chane the formatting of the data that is written to the file. Used with << as literal variables.


    Some useful manipulators:

    Manipulator                Example                                      Description
    boolalpha           myFile << boolalpha << false;                   Writes boolean values
    dec                 myFile << dec << 12;                            Integers as decimal digits
    oct                 myFile << oct << 12;                            Integers as octal digits
    hex                 myFile << hex << 12;                            Integers as hexadecimal digits
    showbase            myFile << hex << showbase << 12;                Prefixes the numbers (hex 0x, oct 0)
    endl                myFile << "text" << endl << "text";             Writes a Newline character
    ends                myFile << "text" << ends;                       Writes null terminating (\0)
    fixed               myFile << fixed << 3.14;                        Floating point numbers with a fixed number of decimal
    showpoint           myFile << showpoint << 12.0;                    Decimal point for floating point, even if it's not neeed
    setprecision()      myFile << setprecision(3) <<3.141               The precision of floating point numbers
    setw()              myFile << setw(5) << ... ;                      Padding from left (requires <iomanip>)
    setfill()           myFile << setfill(',') << setw(x) << 3.14;      Choosing a character to use as padding (requires <iomanip>)
    showpos             myFile << showpos << 12;                        Plus (+) sign next to positive numbers
    left                myFile << setw(5) << left << "text";            Aligns output to right
    right               myFile << setw(5) << right << "text";           Aligns output to left
    .
    .
    .
    */

    /*
    Some ofstream file object methods:

    Method                  Example                     Description
    write(str, n)           myFile.write(myStr, 5)      Writes n character of str into the file
    put(character)          myFile.put(c)               Writes a specified character into the file
    seekp(position)         myFile.seekp(5)             Moves the file pointer to a specified position relative to the beginning of the file
    tellp()                 myFile.tellp()              Returns the current position of the file pointer
    .
    .
    .
    */
}
