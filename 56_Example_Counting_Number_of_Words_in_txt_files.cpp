#include <fstream>
#include <iostream>
#include <sstream> //A string stream associates a string object with a stream allowing you to read from string as if it were a stream (like cin).
/*
Basic methods of string stream:

clear() -> clear the stream
str() -> get and set string object whose content is present in the stream
<< -> add a string to the string stream object
>> -> read something from the string stream object
*/
#include <string>
using namespace std;

int main(){
    ifstream myFile("file.txt");

    if(!myFile.is_open()){
        cout << "Error! Unable to read the file." << endl;
        return 0;
    }

    string l;
    int wordCount = 0;

    while(getline(myFile, l)){
        cout << l << endl;

        stringstream s(l); //creating an object of string stream (using for breaking words)
        string word; //to storing individual words

        while(s >> word){ //reading words from the string stream object of s
            wordCount++;
        }
    }

    myFile.close();

    cout << endl << "Number of words in the file: " << wordCount << endl;
}
