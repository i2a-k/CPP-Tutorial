#include <iostream>
using namespace std;

/*
Arrays:
Are used to store multiple values.

Syntax:
type identifier[sizeOfArray]; => Example: char myArray[5];
*/

int main(){
    char myArray1[5] = {'X', 'Y', 'A', 'B', 'N'}; //Initialization an array
    //myArray1 Elements => [A][B][C]  =>  [ ] [ ]...[ ] [ ]
    //myArray1 Indices =>   0  1  2   =>   0   1    n-2 n-1
    //Example: myArray1[0] : 'A'  or  myArray1[2] : 'C'
    int myArray2[] = {1, 2, 3, 4, 5, 6, 7};

    cout << myArray1[1] << ", " << myArray2[3] << endl;

    //Note: size of arrays are fix when they are created, but values can be updated.
    myArray1[1] = 'Z';
    myArray1[4] = 'T';

    //Loop through arrays
    for (int i=0; i<5; i++)
    {
        cout << myArray1[i] << ", ";
    }
}