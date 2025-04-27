#include <iostream>
using namespace std;

/*
Pure Virtual Methods:
 If a method does not have any use in the base class, but the method must be implemented by all its derived classes.
 A pure virtual method does not have the function body and it must end with "=0".

Abstract Class:
 A class that contains a pure virtual method is known as an Abstract class.
 We cannot create objects of an abstract class. However, we can derive classes from them, and use their data members and member functions (except pure virtual methods).

*/

class Shape { //Abstract Class
    protected:
        double dim = 0;

    public:
        Shape(double d = 1) : dim{d} {};
        virtual double area() = 0; //pure virtual method
};

class Square : public Shape {
    public:
        Square(double d = 1) : Shape(d) {}

        double area() override{ //overriding the pure virtual method, with implementation
            return dim*dim;
        }
};

class Circle : public Shape {
    private:
        float Pi = 3.14;
    public:
        Circle(double r = 1) : Shape(r){}

        double area() override{
            return Pi*dim*dim;
        }
};

int main(){
    //Shape s; //causing an error
    Square s(2);
    cout << "Area of the square = " << s.area() << endl;

    Circle c(1.5);
    cout << "Area of the circle = " << c.area() << endl;
}
