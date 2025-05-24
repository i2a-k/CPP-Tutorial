/*
File Handling in C++ is a mechanism to create and perform read/write operations on a file.
Various file handling methods can be accessed by importing the "fstream" class (#include <fstream>).
"fstream" includes 2 classes for file handling:
                                    ifstream -> to read from a file
                                    ofstream -> to create/open and write to a file
*/

#include <fstream>
#include <iostream>
using namespace std;

int main(){
    /*
    In order to work with files, we first need to open them.
    ofstream fileObjectName("directory/fileName.format"). If file is on root directory, there is no need to use address of the directory.
    */
    ofstream myFile("sample.txt");
    //myFile is an object of the ofstream class of the sample.txt file.
    //If there's no such file to open, ofstream will instead create a new file.


    if(myFile.is_open()) cout << "The file is opened." << endl;
    //is_open() checks if the file is in an error state (true => open successfully, false => fail to open)

    if(!myFile.fail()) cout << "The file is opened." << endl;
    //fail() returns true if the file failed to open, or false if the file was opened successfully

    //the file needs to close using close() method, Once working on the file is done.
    myFile.close();
}
