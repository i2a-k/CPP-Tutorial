#include <iostream>
using namespace std;

/*
 Inheritance provides code reusability in the program because we can use an existing class(Super Class/ Parent Class/ Base Class) to create a new class (Sub Class/ Child Class/
Derived Class) instead of creating it from scratch.
 The derived class inherits data definitions and methods from the base class which facilitates the reuse of features already available. The child class can add few more definitions
or redefine abase class method.


An example of inheritance:
    Base Class: Person
    Derived Classes: Teacher and Student
                                                                    Person (Base Class)
                                                                attributes: name, gender, age
                                                             methods: personal_info(), parent_info()

                                                                                |
                                            ____________________________________|____________________________________
                                           |                                                                         |
                                           |                                                                         |

                                Teacher (Derived Class)                                                    Student (Derived Class)
                             attributes: tID, field, courses                                              attributes: stdID, field
                         methods: teacher_info(), students_info()                               methods: student_info(), schedule(), grades()
                 inherits: name, gender, age, personalInfo(), parent_info()               inherits: name, gender, age, personalInfo(), parent_info()


Or consider the Animal super-class, each animal class can be considered as a sub-class of it.

                          Animal
                        __________                  Dog
                       |          |              __________
                       |   eat()  |  inherits   |          |
Base Class ==========> |          | ==========> |  bark()  | ========> Derived Class
                       |  sleep() |             |__________|
                       |__________|


Note: Inheritance is an "is-a relationship". We use inheritance only if an "is-a relationship" is present between the two classes.
For Example:
            - A car is a vehicle
            - Orange is a fruit
            - A dog is an animal


Syntax:
        class Base {
            ...
        };

        class Derived : public Base {

        };
*/

class Animal { //Base Class
    public:
        void eat(){
            cout << "Eating!" << endl;
        }

        void sleep() {
            cout << "Sleeping!" << endl;
        }
};

class Dog : public Animal { //Derived Class
    //Inherits eat, and sleep methods
    public:
        void bark(){
            cout << "Barking!" << endl;
        }
};


class Vehicle {
    public:
        string type = "Four Wheel";
        string brand = "";

        void carInfo(){
            cout << type << " Car of " << brand << endl;
        }
} ;

class Ford : public Vehicle {
    public:
        string model = "Mustang";
        string year = "1969";

        void info(){
            cout << model << " model, has been released on " << year << endl;
        }
};
int main()
{
    Dog dog;
    dog.eat(); //Inherited method
    dog.sleep(); //Inherited method
    dog.bark();


    Ford f1;
    f1.carInfo();
    f1.brand = "Ford"; //Inherited attributes can be updated
    f1.carInfo();
    f1.info();
}
