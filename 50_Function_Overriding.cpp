#include <iostream>
using namespace std;

/*
 Suppose a same method has been defined in both base and derived classes. When this method is called using an object of the derived class, the method of the derived class executes.
This is known as "Function Overriding".
*/

class Base {
    public:
        void info(){
            cout << "Base class!" << endl;
        }
};

class Derived1 : public Base {
    public:
        void info(){
            cout << "Derived class!" << endl;
        }
};

class Derived2 : public Base {
    public:
        void info(){
            cout << "Derived class!" << endl;
            Base::info();
        }
};

int main(){
    Derived1 d1;
    d1.info();
    //The method in the derived class shadows the method in the base class. this is called shadowing the base class method.


    //To access the shadowed method of the base class, the scope resolution operator "::" can be used.
    d1.Base::info();
    cout << endl;
    Derived2 d2;
    d2.info();


    cout << endl;
    //The shadowed method can also be accessed by using a pointer of the base class to point to an object of the derived class and then calling the function from that pointer
    Base* ptr = &d1; //pointer of base that points to d1
    ptr->info(); //calling method of base class using ptr
    //This is because even though ptr points to a Derived object, it is actually of Base type. So, it calls the method of Base.
}
