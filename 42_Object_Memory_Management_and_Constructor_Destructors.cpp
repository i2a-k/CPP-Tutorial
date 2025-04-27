#include <iostream>
using namespace std;

//Same as variables and arrays, "new" and "delete" is using to manage memory dynamically (Example: 82, 89 Lines). Or using copy constructors with pointer members and destructors

/*
Constructor:
    A special public method that is called automatically when an object is created. This method has the same name as the class followed by () and does not have a return type
    Just like regular methods constructors can also take parameters and be defined outside the class
    If no constructor is defined, C++ compiler will automatically creates a default constructor with no parameters
    In C++ data can be copied from one object to another using copy constructors

Destructor:
    A special method that is called automatically when an object goes out of scope (delete). This method has the same name as the class followed by () and does not have a return
   type. "~" operator indicates a destructor (before name)
    If no destructor is defined, C++ compiler will automatically creates a default constructor with an empty body
    The destructor deallocates the dynamic memory acquired by the objects
*/
class Student {
    public:
        string name, stdID, field;

        Student(){ //Constructor
            cout << "Science and Research University." << endl;
        }

        void info(){
            cout << name << " is studying " << field << " with " << stdID << " ID." << endl;
        }
};

class Circle {
    public:
        float pi, radius;

        double area(){
            return pi * radius * radius;
        }

        Circle (float r): //Parameterized constructor with default value of pi
            pi{3.14}, radius{r} {
                cout << "A circle with radius " << r << " CM has been created." << endl;
            }

        Circle (Circle& obj): //Copy constructor
            //Is Used to copy data from an object to another
            pi{3.14}, radius{obj.radius} { //Values of the variables of the objects can be assigned to the corresponding variables of the object using "obj.varName"
                cout << "A circle with radius " << obj.radius << " CM has been created." << endl;
            }
};

//When the class has pointer members, the default copy constructor just assigns the value of member pointers of objects, rather than allocating different memory addresses
//To allocate new memory address for the variable and copy the data, a copy constructor must be declared. Moreover the memory can be deallocated using destructor
class Car {
    public:
        string* brand;
        string* model;
        string* year;

        Car (string b, string m, string y): //Constructor
            brand{new string {b}}, model{new string {m}}, year{new string {y}} {
            }

        Car (Car& obj): //Copy constructor that takes an object (obj) of Car as a reference
            brand{new string{*(obj.brand)}}, model{new string{*(obj.model)}}, year{new string{*(obj.year)}} {
            }
            //*(obj.brand) => Value pointed by brand pointer member of the argument object (obj)
            //new string {...} => Dynamically allocates memory for string data type with specific value and returns the memory address
            //brand{...{...}} => Initializes the brand variable of the new object with the new memory address
        void info(){
            cout << *brand << ", " << *model << ", " << *year << endl;
        }

        ~Car() { //Destructor
            delete brand;
            delete model;
            delete year;
        }
};

int main(){
    Student* ptrSTD = new Student(); //Dynamically declaring student object
    ptrSTD->name = "SS DD"; //"->" operator is using to access class properties using pointers
    ptrSTD->stdID = "1234";
    ptrSTD->field = "Comp";

    ptrSTD->info();

    delete ptrSTD; //Pointer memory is released

    cout << endl;

    Circle c1(5);
    cout << "Area = " << c1.area() << " CM" << endl;
    cout << endl;
    Circle c2 = c1; //A copy of c1 is created (c2)
    cout << "Area = " << c1.area() << " CM" << endl;

    cout << endl;

    Car car1("BMW", "X5", "1999");
    Car car2("Ford", "Mustang", "1969");

    Car car3 = car1; //c3 is a copy of c1

    car1.info();
    car2.info();
    car3.info();

    Car* car4 = new Car("Benz", "300SL", "1990");
    car4->info();
    delete car4; //Destructor is called
    //When an object goes out of scope, it's respective destructor is invoked. The destructor deallocates the dynamic memory acquired by the objects
}

/*
                                                            Basics of Object-Oriented Programming:

Encapsulation:
            Hiding data or implementation details of one module from other modules. It can also be defined as restricting access to certain properties. Encapsulation is a
           technique which is used for data hiding. It is helpful in reducing system’s complexity.


Inheritance:
            Inheritance is an important pillar of OOP. The capability of a class to derive properties from another class is called Inheritance. When we write a class, we inherit
           properties from other classes. So when we create a class, we do not need to write all the properties and functions again and again, as these can be inherited from
           another class that possesses it.


Polymorphism:
            The word polymorphism means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form.
           Polymorphism means having one name with many forms. Here we can have methods with the same name but slight change in its functionality (the same object posses
           different behavior in different situations).


Abstraction:
            One of the most essential and important features of object-oriented programming. Data abstraction refers to providing only essential information about the data to
           the outside world, hiding the background details or implementation.

*/
