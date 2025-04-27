#include <iostream>
using namespace std;

/*
 Polymorphism simply means "many forms" or "more than one form", that is, the same entity (function or operator) behaves differently in different scenarios. For example, the "+"
operator is used to perform two specific functions. When it is used with numbers, it perform addition, and when it is used with strings, it performs string concatenation.

int x = 2;                      string a = "abc";
int y = 4;                      string b = "qwe";
int s = x + y; (s = 6)          string c = a + b; (c = "abcqwe")

Polymorphism can be implemented in 2 ways:
    - Function Overloading
    - Function Overriding
*/


/*
Parameter Overloading:
In C++ we can use functions having the same name if they have different types or number of parameters. These functions are known as overloaded functions.
*/

int sum(int a, int b){
    return a + b;
}

double sum(double a, double b){
    return a + b;
}

string sum(string a, string b){
    return a + b;
}


int sum(int a, int b, int c){
    return a + b + c;
}

int sum(int a, int b, int c, int d){
    return a + b + c + d;
}


/*
Operator Overloading:
 In C++ we can define how operators behave for user-defined types like classes. For example, the "+" operator, when used with values of type "int", returns their sum. However,
when used with objects of a user-defined type, it is an error. We cannot use operator overloading for basic types such as int, double, etc. Operator overloading is basically
function overloading, where different operator functions have the same symbol but different operands.

Syntax (using "operator" keyword):
    return_type operator symbol (arguments) {
                    ...
    }

*/

class A {
    private:
        int value;

    public:
        A() : value(0) {}

        void operator ++ (){ //Overloading as prefix
            value += 1;
        }

        void operator -- (){
            value -= 1;
        }

        void display(){
            cout << "Value = " << value << endl;
        }
};


class B {
    private:
        int x;

    public:
        B(int x = 0) : x(x) {}

        B operator + (const B& b1){ //Binary operator overloading (obj1 + obj2)
            return B(x + b1.x); //Returning an new object with updated value of x
        }

        void display() const {
            cout << x << endl;
        }
};

class C {
    private:
        int x, y;

    public:
        C(int x = 0, int y = 0) : x(x), y(y) {}

        C operator + (const C& c1){ //Binary operator overloading (obj1 + obj2)
            cout << x + c1.x << endl;
            return 0; //Avoiding the warning
        }

        C operator * (const C& c1){ //Binary operator overloading (obj1 + obj2)
            cout << x * c1.x << endl;
            return 0;
        }

};

int main(){
    cout << sum(2, 3) << ", " << sum(2.5, 3.4) << ", " << sum("AA", "BB") << endl;
    //Based on the type of parameter passed during the function call, the corresponding function is called.

    cout << endl;

    cout << sum(1, 2) << ", " << sum(1, 4, 7) << ", " << sum(4, 5, 6, 7) << endl;

    cout << endl;

    A a1;
    ++a1;
    a1.display();
    ++a1;
    a1.display();
    --a1;
    a1.display();

    cout << endl;

    B b1(5);
    B b2(4);
    B b = b1 + b2; //New object with updated value using operator (+) overloading
    b.display(); //Displaying the updated value from previous line using a method

    cout << endl;

    C c1(3, 5);
    C c2(4, 2);
    c1 + c2; //Calculating the sum of x values of two different object using operator (+) overloading
    c1 * c2; //Calculating the multiple of y values of two different object using operator (*) overloading
}
