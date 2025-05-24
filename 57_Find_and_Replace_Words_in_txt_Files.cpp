#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    ifstream input("file.txt");
    ofstream output("newFile.txt");

    if(input.fail() && output.fail()){
        cout << "Error! Unable to read files." << endl;
        return 0;
    }

    string sWord = "Object-Oriented-Programming";
    string rWord = "OOP";
    string line;

    while(getline(input, line)){
        unsigned int pos = line.find(sWord); //finding the position of the specific string (word) in the line
        while(pos != -1){ //Repeat until all occurrences are replaced (end of file)
            line.replace(pos, sWord.length(), rWord); //replacing sWord with rWord in position of sWord
            pos = line.find(sWord, pos + rWord.length()); //finding next occurrence of the sWord
        }

        output << line << endl; //writing the modified line to the output file
    }

    input.close();
    output.close();
}
