#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int arraySize = 10;
    int A[arraySize], B[arraySize];

    srand(time(0));
    for(int i=0; i<arraySize; i++){
        ////storing random numbers (10,999) in arrays
        A[i] = 10 + rand()%90;
        B[i] = 10 + rand()%90;
        cout << A[i] << "   " << B[i] << endl;
    }

    cout << "Common numbers: " << endl;
    for(int j=0; j<arraySize; j++){
        for (int k=0; k<arraySize; k++){
            //Comparing all elements of two arrays
            if(A[j] == B[k]) {
                cout << A[j] << "  ";
                break; //break is used to prevent print duplicate numbers
            }
        }
    }
}