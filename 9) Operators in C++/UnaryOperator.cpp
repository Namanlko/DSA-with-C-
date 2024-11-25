// Unary Operator: Unary operator in C++ operates on a single operand to perfom operations like increment and decrement.

// There are two type of Unary Operator.
// 1) Increment
// 2) Decrement

#include<iostream>
using namespace std;

int main(){
    
    // 1) Pre Incrment: Firstly Increase Value Then Assign.
    int a = 1;
    cout<<++a<<endl;
    cout<<a<<endl;

    // 2) Post Incrment: Firstly Assign Value Then Increase.
    int b = 1;
    cout<<b++<<endl;
    cout<<b<<endl;

    // 3) Pre Decrement: Firstly Decrease Value Then Assign.
    int c = 1;
    cout<<--c<<endl;
    cout<<c<<endl;

    // 4) Post Decrement: Firstly Assign Value Then Decrease.
    int d = 1;
    cout<<d--<<endl;
    cout<<d<<endl;

    return 0;
}
