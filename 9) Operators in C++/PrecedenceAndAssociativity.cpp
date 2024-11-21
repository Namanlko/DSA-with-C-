// Precedence: Precedence determines the order in which operators are evaluated in an expression. Operators with higher precedence are evaluated first.

// Associativity: Associativity determines the direction of evaluation when two operators of the same precedence appear.

#include<iostream>
using namespace std;

int main(){

    // Example of Precedence:
    int result1 = 10 + 5 * 2; // Multiplication (*) has higher precedence than addition (+)
    cout<<"Result: "<<result1<<endl; // Output: 20

    // Example of Associativity:
    int x = 10, y = 5, z = 2;
    int result2 = x = y = z; // Assignment (=) is right-to-left associative
    cout<<"x:"<<x<<", y:"<<y<<", z:"<<z<<endl; // Output: x: 2, y: 2, z: 2


    return 0;
}