#include <iostream>
using namespace std;

/*
 Notice the derived class Dog from base class Animal in previous section, the "public" keyword is used in definition of the Dog class to inherit from the Animal class. This means
that a derived class have been created from the base class in public mode. Alternatively, also derived classes can be created in "protected" or "private" modes.

Public inheritance:
                    This makes public members of the base class public in the derived class, and the protected members of the base class remain protected in the derived class.

Protected inheritance:
                    This makes public and protected members of the base class protected in the derived class.

Private inheritance:
                    This makes the public and protected members of the base class private in the derived class.

For Example:

class BaseClass {
    public:
        int a;

    protected:
        int b;

    private:
        int c;
};

class A : public BaseClass {
    a => public
    b => protected
    c => not accessible
};

Class B : protected BaseClass {
    a => protected
    b => protected
    c => not accessible
};

Class C : private BaseClass{
    a => private
    b => private
    c => not accessible
};
*/

//The examples in the previous sections, were all of the public inheritance.

class Base {
    private:
        int pvt = 1;

    protected:
        int prot = 2;

    public:
        int pub = 3;

    int getPvt(){
        return pvt;
    }
};

class ProtDerived : protected Base {
    public:
        int getProt(){ //to access protected (now protected) member from Base
            return prot;
        }

        int getPub(){ //to access public (now protected) member from Base
            return pub;
        }
};

class PrvtDerived : private Base {
    public:
        int getProt(){ //to access protected member (now private) from Base
            return prot;
        }

        int getPub(){ //to access public member (now private) from Base
            return pub;
        }
};

int main(){
    ProtDerived obj1;
    cout << "Protected Derived Class: " << endl;
    //cout << obj1.getPvt(); //Base::getPvt() is inaccessible, so causing an error
    //cout << obj1.pub; //Base::pub is inaccessible, so causing an error
    cout << obj1.getProt() << endl;
    cout << obj1.getPub() << endl;

    cout << endl;

    PrvtDerived obj2;
    cout << "Private Derived Class: " << endl;
    //cout << obj2.getPvt(); //Base::getPvt() is inaccessible, so causing an error
    //cout << obj2.pub; //Base::pub is inaccessible, so causing an error
    cout << obj2.getProt() << endl;
    cout << obj2.getPub() << endl;

    //getProt and getPub are accessible for derived classes from ProtDerived, but not accessible for derived classes from PrvtDerived.
}
