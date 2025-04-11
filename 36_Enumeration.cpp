#include <iostream>
using namespace std;

/*
Enum is a user-defined data type that consists of integral constants (unchangeable values).
Syntax: enum name {constant1, constant2, ... };
Example: enum Level {LOW, Medium, HIGH};        Level => Enumerate Type,        LOW,MEDIUM,HIGH => Values of Level

By default first value is 0, second value is 1, and so on.
The default values can be changed. Example: enum Level {LOW = 25, HIGH = 50};

Why are enums used?
An enum variable takes only one value out of many possible integer values (Second example).
This makes enum a good choice to work with flags.

*/

//Declaration: (First examples)
enum Week {Saturday, Sunday, Monday, Tuesday, Wednesday, Thursday, Friday}; //0,1,2,3,...
enum Level {LOW = 15, MEDIUM = 25, HIGH = 35};

//Second example
enum suit {
    //Must be integers
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3
} card;

int main(){
    Week today;
    today = Wednesday;
    cout << today << endl;

    enum Level lvl = MEDIUM;

    switch(lvl) {
        case 15:
            cout << "Low level";
        break;

        case 25:
            cout << "Medium level";
        break;

        case 35:
            cout << "High level";
        break;
    }

    //Second example
    card = club;
    cout << "\nSize of enum variable: " << sizeof(card) << " bytes.";
}