#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

//Create a vector contains of integers. delete the last 2 members of the vector, and add 2 random numbers to it.
//At last print the maximum number in the vector.
int main(){
    vector<int> A = {75, 20, 90, 30, 45};
    for (int i=0; i<2; i++){
        A.pop_back();
    }

    srand(time(0));
    for (int i=0; i<2; i++){
        A.push_back(rand() % 100);
    }

    int MAX = 0;
    for (int i : A){
        cout << i << ", ";
        if(i > MAX) MAX = i;
    }

    cout << "\n" << "Maximum Element = " << MAX << endl;
}