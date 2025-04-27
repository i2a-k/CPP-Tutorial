#include <iostream>
using namespace std;

/*
 The meaning of "Encapsulation", is the practice of bundling related data into a structured unit. It involves the bundling of data members and functions inside a single class.
 Bundling process also helps in data hiding. Data hiding refers to restricting access to data members of a class. This is to prevent other functions and classes from tampering with
the class data. However, it is also important to make some member functions and member data accessible so that the hidden data can be manipulated indirectly.
 A concept called access modifiers (of C++) allows us to determine which class members are accessible to other classes and functions, and which are not.
 In C++, there are 3 access modifiers:
    - public    : We are quite familiar with the public keyword that appears in all of our previous class examples. The Public members are accessible from outside of the class (any
                 part of the program).

    - private   : The private members cannot be accessed (or viewed) from outside of the class, and only can be accessed from within the class. However, friend classes and friend
                 functions can access private members.

    - protected : The protected members cannot be accessed from outside of the class, and only can be accessed within the class and from the derived class. Understanding this part
                 requires about "Inheritance", so it will be covered in the next sections.

Note: By default, all members of a class are private if you don't specify an access modifier.

                                                                                    In summary:

                                      Modifiers     |   Accessed from outside of class |    Accessed by same class  |    Accessed by derived classes
                                ____________________|__________________________________|____________________________|_________________________________
                                       Public       |                Yes               |             Yes            |               Yes
                                ____________________|__________________________________|____________________________|_________________________________
                                       Private      |                No                |             Yes            |               No
                                ____________________|__________________________________|____________________________|_________________________________
                                      Protected     |                No                |             Yes            |               Yes
                                ____________________|__________________________________|____________________________|_________________________________


 In general, encapsulation is a process of wrapping similar code in one place. we can bundle data members and functions that operate together inside a single class.For example
In Circle class of session 41, the method area() calculates the area of a circle. To calculate the area, it needs Pi and radius. Hence, the data members (Pi and radius) and the
method area() are kept together in the Circle class.
                                                                                    Encapsulation
                                                                        _____________________________________
                                                                       |            Class: Circle            |
                                                                       |                                     |
                                                                       |       Data members: Pi, radius      |
                                                                       |                                     |
                                                                       | Member methods: perimeter(), area() |
                                                                       |_____________________________________|

 In the above example, data and methods ca be accessed from other classes as well. Hence, this is only encapsulation, not data hiding. Encapsulation refers to the bundling of
related fields and methods together. this can be used to achieve data hiding.

Advantages of Encapsulation:
            - Makes the codes cleaner and easy to read
            - Helps to control modifications of data members without affecting other parts
            - Provides read-only or write-only access to our class members (setter and getter methods)
            - Helps to decouple components of a system
            - Can also achieves data hiding
            - Increases security of data
*/

class Sample1 {
    public: //public elements will be listed below
        int A; //public data

        void display(){ //public method
            cout << "A = " << A << endl;
        }
};

class Sample2 {
    private: //private elements will be listed below
        int A;
    //Making the elements private, allows to restrict unauthorized access from outside of the class

    public:
        void display(int a){
            A = a;
            cout << "A = " << A << endl;
        }

};

class sample3 {
    int x = 2; //Private attribute by default

    public:
        int y = 10;
};

//Data hiding is a way of restricting the access of our data members by hiding the implementation details. Encapsulation can provides a way for data hiding.
class Rectangle {
    private:
        int length;
        int breadth;

    public:
        void setLength(int l){
            length = l;
        }

        void setBreadth(int b){
            breadth = b;
        }

        int getLength(){
            return length;
        }

        int getBreadth(){
            return breadth;
        }

        int getArea(){
            return length*breadth;
        }
};

int main(){
    Sample1 obj1;

    //Accessing public elements directly from main()
    cin >> obj1.A;
    obj1.display();


    int myInput;

    Sample2 obj2;

    //Cannot directly access the private elements from main
    //cin >> obj2.A; //causing an error
    //We can only indirectly manipulate A attribute through the public method display()
    cin >> myInput;
    obj2.display(myInput);


    //sample3 obj3;
    //cout << obj3.y << endl;
    //cout << obj3.x << endl; //causing an error

    //obj3.y = 5;
    //obj3.x = 1; //causing an error

    Rectangle r;

    //To access the private attributes, public methods should be used. These methods are called setter and getter functions. This is data hiding
    r.setLength(4);
    r.setBreadth(5);
    cout << r.getLength() << ", " << r.getBreadth() << ", " << "Area = " << r.getArea() << endl;
}
