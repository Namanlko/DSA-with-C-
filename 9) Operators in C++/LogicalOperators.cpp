// Logical Operator: Logical operators are used to perform logical operations on expressions. They return a boolean result (true or false). The most common logical operators in C++ are:

// 1) && (Logical AND): Returns true if both operands are true, otherwise returns false.
// 2) || (Logical OR): Returns true if at least one operand is true, otherwise returns false.
// 3) ! (Logical NOT): Returns true if the operand is false, and false if the operand is true.

#include<iostream>
using namespace std;

int main(){
    
    bool a = true, b = false;

    // Using Logical Operators:
    cout<<"a && b:"<<(a&&b)<<endl;  // Logical AND (false because b is false)
    cout<<"a || b:"<<(a||b)<<endl;  // Logical OR (true because a is true)
    cout<<"!a:" <<(!a)<<endl;       // Logical NOT (false because a is true)
    cout<<"!b:" <<(!b)<<endl;       // Logical NOT (true because b is false)

    return 0;
}