#include <iostream>
#include <vector>
using namespace std;

//Also can pass arrays or vectors to a function as argument
//CStrings can be passed to a function like arrays => void myFunc (myStr[n][m]) or void myFunc (myStr *)
//For CPP strings => void myFunc (string)
//double summation(int numbers[]){...}
double summation(vector<float> numbers){
    double sum = 0;
    int len;
    len = numbers.size();
    for (int i=0; i<len; i++){
        sum += numbers[i];
    }

    return sum;
}

//a function can be used inside another function, only if is defined above.
void average(vector<float> numbers){
    double sum;
    sum = summation(numbers); //using another function
    int len;
    len = numbers.size();
    cout << len << endl;
    cout << "Average = " << sum/len << endl;
}


//It is possible to making a function call itself. This technique is called recursion.
//Recursion provides a way to break complicated problems down into simple problems which are easier to solve.
//Example: Adding a range of numbers using recursion.
int sum(int n){
    //A recursive function
    if(n>0) return n + sum(n-1);
    else return 0;
    //Recursive functions must have a termination condition.
}

int main(){
    vector<float> numbers = {15.5, 14.75, 20, 19.25, 17};
    average(numbers);

    int n = 4;
    int s = sum(n); //Calling a recursive function
    cout << 1 << " + ... + " << n-1 << " + " << n << " = " << s << endl;
    /*
    4 + sum(3)
    4 + (3 + sum(2))
    4 + (3 + (2 + sum(1)))
    4 + (3 + (2 + (1 + sum(0))))
==> 4 +  3 +  2 +  1 +  0
    */
}