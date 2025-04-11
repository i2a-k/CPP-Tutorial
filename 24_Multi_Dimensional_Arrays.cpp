#include <iostream>
#include <cmath>
using namespace std;

//Multi-Dimensional Arrays
int main(){
    int A[2][3] = {{1, 5, 9}, {3, 5, 7}}; //2D Array (Matrix)

    for(int i=0; i<2; i++)
    {
        for (int j=0; j<3; j++)
        {
            A[i][j] = pow(A[i][j], 2); //pow() function in cmath library
        }
    }

    for(int i=0; i<2; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout << A[i][j] << ", ";
        }
        cout << endl;
    }

    //3D-Array
    char B[4][2][3] = {
                        { {'Q', 'W', 'E'}, {'A', 'S', 'D'} },
                        { {'Z', 'X', 'C'}, {'R', 'T', 'Y'} },
                        { {'F', 'G', 'H'}, {'V', 'B', 'N'} },
                        { {'U', 'I', 'O'}, {'J', 'K', 'L'} },
                      };
}