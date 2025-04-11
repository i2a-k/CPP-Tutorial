#include <iostream>
#include <string> //Header file for using CPP strings
using namespace std;

int main(){
    //A string variable contains a collection of characters (Sorting text into strings)
    //Syntax: string identifier = "any_text";
    string myString = "CPP Programmig";
    cout << myString << endl;

    //1)Using append function
    string fName = "AAAA ";
    string lName = "BBBB";
    string fullName = fName.append(lName);
    cout << fullName << endl;

    //Concatenation of strings:
    //1)Using + Operand
    string A = "Introduction to";
    string B = A + " " + myString;
    cout << B << endl;

    /*Note: Numbers are added by, and strings are concatenated by +
    int x = 10, int y = 5 ==> (x + y) == 15 (integer)
    string a = "10", string b = "5" ==> (a + b) == "105" (string)
    but, (x + a) causes an error
    */

    string myTxt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    //length of an string:
    cout << myTxt.length() << ", " << myTxt.size() << endl; //size function is an alias of length function

    //Characters of a string can be accessed by referring to its index like arrays
    cout << myTxt[0] << ", " << myTxt[12] << endl;

    //Specific characters in a string can be updated
    myTxt[3] = '1';
    myTxt[19] = '9';
    cout << myTxt << endl;

    //Updating characters using at() function
    cout << myTxt.at(25) << endl;
    myTxt.at(1) = 'b';
    myTxt.at(25) = 'z';
    cout << myTxt << endl;

    //User input strings
    string newTxt;
    cin >> newTxt; //Every character before space or tab
    //getline(cin, newTxt); //Space and tab can be used

    cout << newTxt << endl;

/*
Common functions that are used with the string class:
string A = "..."
A.find("text") //finding text in A
A.append("text") //concatenating A with text
A.insert(x, "text") //inserting text into x position (index)
A.erase(x, y) //erasing y characters from y position (index)
A.replace(x, y, "text") //replacing y characters with text from x position (index)
A.compare(strVar) //comparing two strings
*/

}