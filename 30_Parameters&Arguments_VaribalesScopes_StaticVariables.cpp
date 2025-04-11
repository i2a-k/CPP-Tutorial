#include <iostream>
using namespace std;

//Note: if a function is called without argument, the default value for the parameter is used.
double power(int x, int y=2){
    //y is a default parameter with value 2
    double result = 1;
    for (int i=1; i<=y; i++){
        result *= x;
    }
    return result;
}

//In C++, variables are only accessible inside the region they are created. this is called scope. (global or local)
int res; //global variable. Are available from within any scope
//Note: if more than one variable with same name are defined inside and outside a function, C++ will treat them as two separate variables.
//      One availables in the global scope, and the other availables in the local scope. Using the same variable name for both globally and
//      locally variables should be avoided.

void summation(){
    int S = 0; //local variable. Cannot be used outside the function
    for (int i=1; i<=res; i++)
    {
        S += i;
    }

    cout << "1 + ... + " << res << " = " << S << endl;
    res = 0;
}

void average(){
    float num = 0, avg = 0;
    static float sum=0;
    static int counter=0;
    //the static variable keeps its value after a function ends. the value of static variables gets carried through the next function call.

    do{
        cout << "Enter the number (Enter -1 to calculate the average): " << endl;
        cin >> num;
        if(num>0){
            counter++;
            sum += num;
        }
    }
    while(num != -1);

    avg = sum/counter;
    cout << sum << ", " << counter << endl;
    cout << "Average = " << avg << endl;
}


int main(){
    int num, pow;

    cout << "First enter the number, then the power" << endl;
    cin >> num;
    cin >> pow;

    res = power(num, pow);
    cout << num << "^" << pow << " = " << res << endl;

    res = power(num);
    cout << num << "^2" << " = " << res << endl;

    summation(); //S = 1 causes an error, because S is a local variable in sum() function
    cout << res << endl; //res will be updated with 0 in summation() function

    average();
    average(); //continues with previous values of sum and counter in average() function
}