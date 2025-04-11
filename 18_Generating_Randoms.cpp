#include <iostream>
#include <ctime>
using namespace std;

//Random numbers
int main(){
    int num1 = rand(); //generating a random integer.
    int num2 = rand() % 101; //a random number between 0 and 100
    cout << num1 << ", " << num2 << endl;

    for (int i=0; i<=10; i++)
    {
        cout << rand() << endl; //generating 10 random numbers
    }

    //Note: rand() does not generate different random numbers each time the program runs. use srand() to fix this.
    //Example: Rolling dice
    unsigned seed, d1, d2;
    cout << "Enter seed of random numbers: ";
    cin >> seed;
    srand(seed);
    d1 = 1 + rand()%6;
    d2 = 1 + rand()%6;

    cout << d1 << ", " << d2 << endl;

    //Tip: Although, the random numbers for each seed are fixed, you can use the time function from <ctime> library to generate different random numbers for each run
    srand(time(0));
    int myRand = rand();
    cout << myRand;
}