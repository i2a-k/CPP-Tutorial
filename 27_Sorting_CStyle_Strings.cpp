#include <iostream>
#include <cstring> //C-Style Strings in C++

using namespace std;

//Example: Sorting some strings
int main(){
    int num = 5;
    char courses[num][15];

    for (int i=0; i<num; i++){
        cin >> courses[i];
    }

    cout << endl;

    char t[15];
    for (int i=num-1; i>=0; i--){
        for (int j=0; j<i; j++){
            //strcmpi is same as strcmp, but strcmpi is not case sensitive
            if (strcmpi(courses[j], courses[j+1]) > 0){
                strcpy(t, courses[j]);
                strcpy(courses[j], courses[j+1]);
                strcpy(courses[j+1], t);
            }
        }
    }

    for (int i=0; i<num; i++){
        cout << courses[i] << endl;
    }
}