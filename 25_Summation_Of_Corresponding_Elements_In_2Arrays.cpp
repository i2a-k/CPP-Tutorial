#include <iostream>
using namespace std;

int main(){
    //Example: Summation of the corresponding elements of A and B and storing them in C.
    int A[2][3];
    int B[2][3];
    int C[2][3];

    cout << "Elements of first array : " << endl;
    for (int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << endl;
    cout << "Elements of second array : " << endl;
    for (int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> B[i][j];
        }
    }

    for (int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << endl;
    cout << "Result: " << endl;
    for (int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << C[i][j] << ", ";
        }
        cout << endl;
    }
}