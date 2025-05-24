#include <fstream>
#include <iostream>
using namespace std;

int main(){
    //Reading from text files is done by opening the file using the "ifstream" class.
    ifstream myFile("test.txt");
    //The text file can be read line-by-line using loop, until the end of the file (EOF) is reached. eof() method is used for this purpose.
    //eof() returns true if the file pointer reaches the EOF, or false if the file pointer does not reach the EOF

    if(!myFile.is_open()) {
        cout << "Error: Unable to open!" << endl;
        return 0; //Terminate the main function if the file is not opened.
    }

    string l; //variable to store text file content
    while(!myFile.eof()) {
        //getline function reads the current line of the file and stores it in a string variable.
        getline(myFile, l); //Storing the current line of the file in the "l".
        cout << l << endl;
    }

    myFile.close();
}
