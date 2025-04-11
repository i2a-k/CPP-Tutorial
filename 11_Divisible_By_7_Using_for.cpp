#include <iostream>
using namespace std;

int main() {
    //Example: Numbers are divisible by 7 in (1,100)
    for (int i=1; i<=100; i++){
        if(i%7 == 0){
            cout << i << endl;
        }
    }
}