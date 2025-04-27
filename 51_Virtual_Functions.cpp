#include <iostream>
using namespace std;

/*
 A virtual function is a member function in the base class that is expected to redefine in derived classes.

 In the last example, the info() method in the derived class shadows the info() method in the base class. However, if a pointer of Base type is created to point to an object of
Derived class and call the info() method, it calls the info() method of the Base class. In other words, the member function of Base is not overridden. To avoid this, the info()
method of the Base class should be declared as virtual using "virtual" keyword in base class and "override" specifier in derived class.

 If the virtual method is redefined in the derived class, the method of derived class is executed even if it is called by a pointer of the base class object pointing to a derived
class object. In such a case, the method is said to be overridden. So, virtual methods are also an integral part of polymorphism in C++.
*/

class Base {
    public:
        virtual void info(){ //Declaring info() method as virtual
            cout << "Base class!" << endl;
        }
};

class Derived : public Base {
    public:
        void info() override{ //Overriding virtual method info() in derived class
        //void inf() override{ //causing an error.
            cout << "Derived class!" << endl;
        }
};

/*
Using the "override" specifier prompts the compiler to display error messages when some mistakes are made:
- Methods with incorrect names. For example: if virtual method in base class is named info(), but the overridden method accidentally named as inf().
- Methods with different return types. For example: if virtual method is of type void, but the overridden method of derived class is of int type.
- Methods with different parameters. For example: if the parameters of the virtual method and the overridden methods don't match.
- No virtual function is declared in the base class.
*/


//Virtual destructor
class A {
    public:
        A() = default;

        virtual void print(){
            cout << "Base Class A" << endl;
        }

        virtual ~A() = default;
        //~A() = default;
};

class B: public A{
    private:
        int* pr;

    public:
        B(int x = 1) : pr(new int{x}){}

        void print() override{
            cout << *pr * *pr << endl;
        }

        ~B(){
            delete pr;
            cout << "pr is deleted." << endl;
        }
};

int main(){
    Derived d;
    Base* ptr = &d;
    ptr->info();

    cout << endl;

    B* a = new B(2); //pointer to B class pointing to B object
    a->print();
    delete a; //invokes B class destructor, which deletes the dynamic memory acquired by the B object

    A* b = new B(3); //pointer to A class pointing to B object
    b->print();
    delete b; //invokes B class destructor

/*
 If we declare the A class destructor as virtual, the B class destructor is called when we delete a pointer to A class pointing to a B object. But if we don't declare the destructor
as virtual, when we delete b which is a A* pointing to B object, the destructor of the A class is called, which does not deallocate the dynamic memory acquired by the B object
*/
}
