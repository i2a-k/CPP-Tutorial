#include <iostream>
using namespace std;

/*

From encapsulation chapter:

 The access modifier "protected" is especially relevant when it comes to C++ inheritance. Same as private members, protected members are inaccessible outside of the class. However,
they can be accessed by derived classes and friend functions/classes. The protected members is needed, if we want to hide the data of a class, but still want that data to be inherited
by its derived class(es).

*/

class Animal {
    private:
        string color;

    protected:
        string type;

    public:
        void eat(){
            cout << "Eating!" << endl;
        }

        void sleep(){
            cout << "Sleeping!" << endl;
        }

        void setColor(string clr){
            color = clr;
        }

        string getColor(){
            return color;
        }
};

class Dog : public Animal {
    public:
        //type is protected ad is thus accessible from Dog class.
        //Also, since the protected keyword hides data, type cannot be accessible directly (setType)
        void setType(string tp){
            type = tp;
        }

        //color attribute from Animal class is private, so cannot be initialized like type in Dog class
        /*
        void setColor(string clr){
            color = clr;
        }
        //this method (setColor) causing an error
        */

        void displayInfo(string c){
            cout << "It's a " << type << " in color " << c << endl;
        }

        void bark(){
            cout << "The dog is barking!" << endl;
        }
};

int main(){
    Dog dog;

    dog.eat();
    dog.sleep();
    dog.setColor("Brown");

    dog.bark();
    dog.setType("Shiba"); //dog.type = "Shiba" causing an error

    dog.displayInfo(dog.getColor());
}
