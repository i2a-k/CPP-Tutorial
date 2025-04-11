#include <iostream>
#include <cstring> //C-Style Strings in C++

using namespace std;

int main(){
    //char identifier[size] = "..."; //array of characters
    char myString[10] = "Hello"; //[H][E][L][L][O][\0] ==> \0 is end of the strings
                                 // 0  1  2  3  4  5
    //char myString[] = {'H', 'E', 'L', 'L', 'O', '\0'};
    cout << myString << endl;

    cout << strlen(myString) << endl; //size of string

    //Concatenating cstrings
    char A[] = "Introduction";
    char B[] = " to c++";
    char C[] = " !";
    strcat(A, B);
    cout << A << endl;

    char D[20];
    strcpy(D, strcat(A, C)); //using output of one function as parameter of another function
    //A + C and D = A are invalid
    cout << D << endl;

    strcat(D, " ****");
    cout << D << endl;

    char E[20];
    strcpy(E, A);

    /*some functions of cstrings
    strcmp(string1,string2) => comparing two strings (S1=S2 => 0, S1>S2 => positive number, S1<S2 => negative number)
    isdigit(char) => if number: 1, else 0
    isalph(char) => if alphabet: 1, else: 0
    strlwr(string) => lower case alphabet
    strupr(string) => upper case alphabet
    ...
    */

    //Example:
    char mySTR[51];
    //cin >> mySTR; //every character before space or tab
    cin.get(mySTR, 50); //Space and tab can be used
    strupr(mySTR);
    cout << mySTR << endl;
}