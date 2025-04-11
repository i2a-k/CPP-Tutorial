#include <iostream>
#include <vector>

using namespace std;

int main(){
    //vector <type> identifier (without size)
    //a vector can grow or shrink
    vector<int> numbers = {1, 2, 3, 4, 5};

    /*for (int i=0; i<5; i++){
        cout << numbers[i] << endl;
    }*/

    //for each: version 11, 2011
    //for (type variableName : structureName){...}
    for (int i : numbers)
    {
        cout << i << endl;
    }

    numbers[0] = 0;
    numbers[4] = 6;

    //functions of vector library (vectorName.functionName)
    cout << numbers.front() << endl; //first element
    cout << numbers.back() << endl; //last element
    cout << numbers.at(1) << ", " << numbers.at(3) << endl; //accessing an element at a specified index

    numbers.at(1) = 9;
    numbers.at(3) = 5;

    for (int i : numbers)
    {
        cout << i << endl;
    }

    //add or remove
    cout << "vector size = " << numbers.size() << endl;
    numbers.push_back(10); //inserting an element at the end of the vector
    numbers.push_back(1);
    cout << "after inserting some elements: " << numbers.size() << endl;

    numbers.pop_back(); //removing an elements from the end the vector
    numbers.pop_back();
    numbers.pop_back();
    cout << "after removing some elements: " << numbers.size() << endl;

}