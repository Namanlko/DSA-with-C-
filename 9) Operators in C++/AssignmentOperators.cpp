// Assignment Operators: Assignment operators are used to assign values to variables. The most common is the = operator, but C++ also provides compound assignment operators for performing operations and assigning the result in one step.

// Types of Assignment Operators

// 1) Simple Assignment (=): Assigns the right-hand value to the left-hand variable.
// 2) Compound Assignment Operators: Perform an operation and assign the result in one step.
//  a) +=: Add and assign
//  b) -=: Subtract and assign
//  c) *=: Multiply and assign
//  d) /=: Divide and assign
//  e) %=: Modulus and assign
//  f) &=, |=, ^=, <<=, >>=: Bitwise operations and assign

#include<iostream>
using namespace std;

int main(){
    
    int a = 10; // Simple Assignment:
    int b = 5;

    // Compound Assignment Operator:
    a += b; // Same as a = a + b
    cout<<"After a += b, a: "<<a<<endl; // Output: 15

    a -= b; // Same as a = a - b
    cout<<"After a -= b, a: "<<a<<endl; // Output: 10

    a *= b; // Same as a = a * b
    cout<<"After a *= b, a: "<<a<<endl; // Output: 50

    a /= b;  // Same as a = a / b
    cout<<"After a /= b, a: "<<a<<endl; // Output: 10

    a %= b;  // Same as a = a % b
    cout<<"After a %= b, a: "<<a<<endl; // Output: 0

    return 0;
}