#include <iostream>
using namespace std;

int main (){
    //Example: Sorting numbers stored in an array in ascending order
    const int arraySize = 10; //const variables are unchangeable and read-only.
    //For example => arraySize = 5 => causing an error
    int A[arraySize];
    unsigned seed;

    cout << "Enter a seed: ";
    cin >> seed;
    srand(seed);

    for (int i = 0; i < arraySize; i++){
        A[i] = rand() % 100; //random numbers in (0,99)
    }

    for(int i = 0; i < arraySize; i++){
        int Min;
        Min = A[i];
        for(int j=i+1; j < arraySize; j++){
            if (A[j] < A[i])
            {
            Min = A[j];
            A[j] = A[i];
            A[i] = Min;
            }
        }
    }

    for (int i=0; i<10; i++){
        cout << A[i]<< endl;
    }

}