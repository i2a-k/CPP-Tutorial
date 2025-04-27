#include <iostream>
using namespace std;

/*
 There is a feature in C++, called friend functions that allow us to access private and protected data and functions of a class. a friend function can be declared using "friend"
keyword inside the body of the class.

Example:
        class className {
            ...

            friend returnType functionName(parameters);

            ...
        };

 Also a friend class can be defined using "friend" keyword. When a class is declared as a friend class, all member functions (methods) of the friend class, become friend functions.

Example:
        class ClassB;

        class ClassA {
            ...

            friend class ClassB; //ClassB is now a friend class of ClassA

            ...
        };

        class ClassB{
            ...
        };

 Since ClassB is a friend class, we ca access all members of ClassA from inside of ClassB. However we cannot access members of ClassB from inside of ClassA. It is Because friend
relation in C++, is only granted, not taken.
*/

class Sample {
    private:
        int x;

        friend int plusOne(Sample); //friend function

    public:
        Sample() : x(0) {} //constructor
};

int plusOne(Sample a) { //friend function definition
    a.x ++ ; //accessing private member of Sample class from the plusOne friend function
    return a.x;
}

//

class ClassB; //forward declaration

class ClassA {
    public:
        ClassA() : xA(1) {} //constructor for initializing xA

    private:
        int xA;

        friend int add(ClassA, ClassB); //Need a forward declaration of ClassB
};

class ClassB {
    public:
        ClassB() : xB(2) {} //constructor for initializing xB

    private:
        int xB;

        friend int add(ClassA, ClassB);
};

int add(ClassA objA, ClassB objB){ //This friend function can assess private members of both classes (ClassA and ClassB)
    return (objA.xA + objB.xB);
}

//

class ClassD; //forward declaration

class ClassC {
    private:
        int xC;

        friend class ClassD; //friend class declaration

    public:
        ClassC() : xC(5) {}
};

class ClassD {
    private:
        int xD;

    public:
        ClassD() : xD(3) {}

        int add(){ //A member function to add xC from ClassC and xD from ClassD
            ClassC objC; //Since ClassD is a friend class, we can create objects of ClassC inside of ClassD
            return objC.xC + xD; //ClassD has access to the private members of ClassC
        }
};

int main(){
    Sample s;
    cout << "x : " << plusOne(s) << endl;


    ClassA A;
    ClassB B;
    cout << "xA + xB = " << add(A, B) << endl;


    ClassD D;
    cout << "xC + xD = " << D.add();
}
