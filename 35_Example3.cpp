#include <iostream>
#include <cstring>
using namespace std;

//Create a function that takes an array of 5 names with 12 characters from the user.
//Then concatenates them and prints the result in capital letters.
void myFunction(char A[5][12]){
    char B[100] = "";
    for (int i=0; i<5; i++){
        strcat(B, A[i]);
    }

    strupr(B);
    cout << B;
}

int main(){
    char A[5][12];
    for(int i=0; i<5; i++){
        cin >> A[i];
    }

    myFunction(A);
}