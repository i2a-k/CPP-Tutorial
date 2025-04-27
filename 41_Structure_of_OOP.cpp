#include <iostream>
using namespace std;

/*
Top–down programming:
     refers to a style of programming where an application is constructed starting with a high-level description of what it is supposed to do, and breaking the specification
    down into simpler and simpler pieces, until a level has been reached that corresponds to the primitives of the programming language to be used.

disadvantages of top-down programming:
    - Top-down programming complicates testing. Noting executable exists until the very late in the development, so in order to test what has been done so far, one must write
     stubs (usually functions or procedures).
    - top-down programming tends to generate modules that are very specific to the application that is being written, thus not very reusable.
    - The main disadvantage of top-down programming is that all decisions made from the start of the project depend directly or indirectly on the high-level specification of
     the application. It is a well-known fact that this specification tends to change over time. When that happens, there is a great risk that large parts of the application
     need to be rewritten.


Bottom-up programming:
     is the opposite of top-down programming. It refers to a style of programming where an application is constructed starting with existing primitives of the programming
    language, and constructing gradually more and more complicated features, until the all of the application has been written.

                         Theory-driven aproach
                         __________________________________________________________________________________________________________
                        |Top-down programming =>                 =>           =>             =>                                    |
                        |                        Problem Solving    Knowledge    Information    Data/Facts                         |
                        |                                        <=           <=             <=            <= Bottom-up Programming|
                        |__________________________________________________________________________________________________________|
                                                                                                              Data-driven approach

advantages of Bottom-up programming over top-down programming:
    - Testing is simplified since no stubs are needed.
    - Pieces of programs written bottom-up tend to be more general, and more reusable, than pieces of programs written top-down.


Object-Oriented Programming (OOP):
     Object-oriented programming (OOP) is a computer programming model that organizes software design around data, or objects, rather than functions and logic. An object can be
    defined as a data field that has unique attributes and behavior. OOP focuses on the objects that developers want to manipulate rather than the logic required to manipulate
    them. This approach to programming is well-suited for programs that are large, complex and actively updated or maintained.In fact Object-oriented languages such as C++, Java,
    or Python uses a bottom-up approach where each object is identified first.

Structure of object-oriented programming:
    Classes: User-defined data types that act as the blueprint for individual objects, attributes and methods.
    Objects: Instances of a class created with specifically defined data. Objects can correspond to real-world objects or abstract entity. When class is defined initially, the
            description is the only object that is defined.
    Attributes: Defined in the class template and represent the state of an object. Objects will have data stored in the attributes field. Class attributes belong to the class
            itself.
    Methods: functions that are defined inside a class that describe the behaviors of an object. Each method contained in class definitions starts with a reference to an
            instance object. Additionally, the subroutines contained in an object are called instance methods. Programmers use methods for reusability or keeping functionality
            encapsulated inside one object at a time.
    //Note: In general the set of attributes & methods is called properties(might be in class scope or object scope).


Advantages of OOP:
    modularity, reusability, privacy, flexibility, scalability, organization, code maintenance, better problem solving

Disadvantages of OOP:
    steeper learning curve, increased complexity, performance overhead, dependency management, overuse of inheritance


Syntax: Classes can be created using keyword "class" followed by name of the class.
        class name {
            //Data (attributes)    => example: string attribute = '';
            //functions (methods)  => example: void method(){ ... }
        };

        Once a class is defined, an object can be created from it.
        className objectName;

        To access the properties of an object, "." is used after the object name, followed by the property name.
        objectName.attribute;
        objectName.method();

*/

class Student {
    public: //Will be explained in next topic
        const string university = "SRBIAU";                                 //Attribute
        string field = "computer engineering", firstName, lastName, stdID;  //Attribute
        float termRate;                                                     //Attribute

        void info(){                                                        //Method
            cout << firstName << " " << lastName << " is studying " << field << " in " << university << endl;
        }

        void isNormal(){                                                    //Method
            if (termRate < 12) cout << "Probated" << endl;
            else if (termRate >= 12 && termRate < 17) cout << "Normal" << endl;
            else cout << "Excellent" << endl;
        }
};

class Circle {
    public:
        const float pi = 3.14;
        float radius;

        double perimeter(){
            return 2 * pi * radius;
        }

        double area(){
            return pi * radius * radius;
        }

        void volumeIfCylinder(int height){
            cout << "The volume of a cylinder with a base of this circle and height of " << height << " CM = " << area() * height << endl;
        }

        void info(); //Methods can be defined outside of the class (Line 112)
};

void Circle::info(){
    cout << "A circle with " << radius << " CM has been created." << endl;
}

int main(){
    Student std1;               //An object of circle class

    std1.firstName = "AAAA";    //Initializing an attribute of c1 object
    std1.lastName = "KKKK";
    std1.stdID = "123456";
    std1.termRate = 17.5;

    std1.info();                //Calling a method of c1 object
    std1.isNormal();

    Student std2;

    std2.firstName = "SSSS";
    std2.lastName = "RRRR";
    std2.stdID = "147258";
    std2.termRate = 15;
    std2.field = "electrical engineering";

    std2.info();
    std2.isNormal();

    cout << endl;

    Circle c1;

    c1.radius = 5;
    c1.info();

    cout << "Perimeter of the circle = " << c1.perimeter() << endl;
    cout << "Area of the circle = " << c1.area() << endl;

    c1.volumeIfCylinder(10);
}
