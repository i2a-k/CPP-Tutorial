#include <iostream>
using namespace std;

/*
Operators in C++:

assignment: = => number = 5;
----------------------------

arithmetic:
-  +  *  /  %  ++  --
Example: -4, a+b, a*b

Suppose: int a = 3;, int b = 2;
a = a\b; => a is updated with 1 (a = 1)
a++; => a is updated with 2 (a = 2)
a--; => a is updated with 1 (a = 1)
----------------------------

shorthand assignment:

+=  -=  *=  /=  %=
a+=b; => a = a + b;
a*=b; => a = a * b;
----------------------------

logical:

|| => or
&& => and
*/

/*
Order of operator precedence:
1) ()
2) *, /, %
3) +, -
Operations of the same precedence are conventionally evaluated from LEFT to RIGHT.

Example:
a + ((c-b)*d) + a/d
      (1)
         (2)
                (3)
 (4)
             (5)
*/


int main(){
    int a = 4;
    int b = -4;
    //a = a * b;
    a *= b;
    cout << a << endl;

    a /= b;
    cout << a << endl;

    a += b;
    cout << a << endl;

    a++;
    cout << a << endl;

    a--;
    cout << a << endl;
}