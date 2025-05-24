#include <iostream>
using namespace std;

class Person {
    string name;
    int age;

    public:
        Person(string name, int age){
            if(name.empty()) throw "Name Cannot be empty";

            if(age<=0 || age>120) throw "Age must be between 1 and 120";

            this->name = name; //this is a pointer to the current instance of a class.
            this->age = age;
            cout << "Person created:     " << name << ", " << age << endl;
        }
};

int main(){
    try {
        Person p1("Amir", 33);
        //Person p2("", 25);
        Person p3("Ali", -1);
    }
    catch(const char* msg){
        cout << msg << endl;
    }
    catch(const char* msg){
        cout << msg << endl;
    }
    catch(...){
        cout << "Caught unknown exception!" << endl;
    }
}
