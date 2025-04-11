#include <iostream>
using namespace std;

int main(){
    //Example: computing sum of an array's elements
    float A[5];
    cout << "Enter five numbers: " << endl;

    for (int j=0; j<5; j++)
    {
        cin >> A[j];
    }

    float sum = 0;

    for(int k=0; k<5; k++)
    {
        sum = sum + A[k];
    }
    cout << "Sum = " << sum;

}