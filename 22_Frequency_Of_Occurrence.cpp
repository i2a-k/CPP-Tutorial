#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int arraySize = 10;
    int A[arraySize];
    int counter[10] = {0}; //with size 10 for numbers: 0,1,2,3,4,5,6,7,8,9

    srand(time(0));
    for(int i=0; i<arraySize; i++){
        A[i] = 1 + rand()%9; //storing random numbers (1,9) in A[]
        cout << A[i] << "  " ;
        counter[A[i]]++;    //Immediately counting the number of occurrences of each
    }

    int f=counter[0]; //most frequency
    for(int k=1; k<10; k++){ //skip zero
        if(counter[k]>f) f=counter[k];
    }

    cout << "\nMost repeated number(s): " << endl;
    for(int p=1; p<10; p++){ //finding number(s) with highest accurence
        if(counter[p] == f) cout << p << "  " ;
    }

    cout << "\n" << "for " << f << " times";
}