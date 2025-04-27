#include <iostream>
using namespace std;

/*
All the examples seen in the previous sections were "single" or "hierarchical" inheritances. There are other types of inheritance: Multiple, Multi-Level, and Hybrid.

     #Single                        #Multiple                       #Multi-Level                   #Hierarchical                          #Hybrid
     Class A                     Class A Class B                      Class A                         Class A                             Class A
        |                           |       |                            |                               |                         __________|__________
        |                           |___ ___|                            |                               |                        |                     |
        |                               |                             Class B                    ________|________             Class B               Class C
        |                               |                                |                      |        |        |               |__________ __________|
        |                               |                                |                      |        |        |                          |
     Class B                         Class C                          Class C                Class B  Class C  Class D                    Class D

Tip: Hierarchical inheritance is a special case, derived from single inheritance.
Tip: Hybrid inheritance is a special case, derived from multiple and multi-level inheritances.
*/

class A {
    private:
        int a = 0;

    public:
        void infoA(){
            cout << "Class A" << endl;
        }
};

class B {
    public:
        string name = "";

        void infoB(){
            cout << "Class B" << endl;
        }
};

                     //                     _
class C : public B{  //Single Inheritance    |
    public:          //                      |
        void infoC(){//                      |
            cout << "Class C" << endl;//     |
        }            //                      |
};                   //                      |       Multi-Level Inheritance
                     //                      | ===>  D is a grand-child of B
class D : public C{  //Single Inheritance    |       When the infoA() is called from an object of D, the compiler first looks for the method in D. Since the method does not exist
    public:          //                      |      there, it looks for the method in C. The method also does not exist in C, so the compiler looks for it in B. It is called member
        void infoD(){//                      |      function overriding.
            cout << "Class D" << endl;//     |
        }            //                      |
};                   //                     _|

                     //                                                                         _
                     //                     _                                                    |
class E : public A{  //                      |                                                   |
    public:          //                      |                                                   |
        void infoE(){//                      |                                                   |
            cout << "Class E" << endl;//     |                                                   |
        }            //                      |                                                   |
};                   //                      |                                                   |
                     //                      | ===>  Hierarchical Inheritance                    |
class F : public A{  //                      |                                                   |
    public:          //                      |                                                   |
        void infoF(){//                      |                                                   |                                          A
            cout << "Class F" << endl;//     |                                                   |                                         _|_
        }            //                      |                                                   |       Hybrid Inheritance               |   |
};                   //                     _|                                                   | ===>  E and F derived from A           E   F
                     //                                                                          |       G derived from E and F           |_ _|
                     //                                                                          |                                          |
                     //                     _                                                    |                                          G
class G : public E, public F {//             |                                                   |
    public:          //                      |                                                   |
        void infoG(){//                      |     Multiple Inheritance                          |
                     //                      |===> G derived from A and B                        |
            cout << "Class G" << endl;//     |     Super-classes are separated by comma          |
        }            //                      |                                                   |
};                   //                     _|                                                   |
                     //                                                                         _|

class Car {
    private:
        string brand, model;

    public:
        Car(string b, string m):
            brand{b}, model{m} {
                cout << "New car is ready to sell!" << endl;
            }

        void showInfo() {
            cout << "Brand: " << brand << ", Model : " << model << endl;
        }
};

class Agency1 : virtual public Car {
    private:
        int a1_price = 1000;

    public:
        Agency1(string b, string c): Car(b, c) {
            cout << "Agency 1 is ready!"<< endl;
        }

        int getA1Price(){
            return a1_price;
        }
};
class Agency2 : virtual public Car {
    private:
        int a2_price = 1100;

    public:
        Agency2(string b, string c): Car(b, c) {
           cout << "Agency 2 is ready!" << endl;
        }

        int getA2Price(){
            return a2_price;
        }
};

class Client : public Agency1, public Agency2 {
    public:
        //Client's constructor
        //Animal's constructor will only be called once due to virtual inheritance
        Client(string a, string b): Car(a, b), Agency1(a, b), Agency2(a, b){}

    void purchase(int a){
        showInfo();
        cout << "Has been purchased from agency !" << a << endl;
    }

};

int main(){
    D d;
    d.infoB();
    d.infoC();
    d.infoD();
    d.name = "AA";
    cout << d.name << endl;

    cout << endl;

    G g;
    g.infoE();
    g.infoF();
    g.infoG();
    //g.infoA(); //Ambiguity in multiple inheritance.
    /* Both classes E and F, have infoA() by inheritance. If infoA() is called from an object of G, the compiler shows ambiguity error.
    It is because the complier does not know which method to call.
    This problem can be solved using the scope resolution to specify which method to class either E or F. */

    //Solving ambiguity
    g.E::infoA();
    g.F::infoA();

    cout << endl;

    //Also, this problem can be solved using virtual inheritance (Lines )
    Client cl("Benz", "CLS");
    cout << cl.getA1Price() << endl;
    cout << cl.getA2Price() << endl;
    cl.purchase(1);

}
