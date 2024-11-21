// Comparison Operator: Comparison operators are used to compare two values. The result of a comparison is a boolean value (true or false).

// Here are the common comparison operators in C++:

// 1) == : Equal To
// 2) != : Not Equal To
// 3) >  : Greater Than
// 4) <  : Less Than
// 5) >= : Greater Than or Equal To
// 6) <= : Less Than or Equal To

#include<iostream>
using namespace std;

int main(){
    
    int a = 10, b = 20;

    // Using comparison operators
    cout<<"a == b:"<<(a == b)<<endl;  // Output: 0 (false)
    cout<<"a != b:"<<(a != b)<<endl;  // Output: 1 (true)
    cout<<"a > b:"<<(a > b)<<endl;    // Output: 0 (false)
    cout<<"a < b:"<<(a < b)<<endl;    // Output: 1 (true)
    cout<<"a >= b:"<<(a >= b)<<endl;  // Output: 0 (false)
    cout<<"a <= b:"<<(a <= b)<<endl;  // Output: 1 (true)
    

    return 0;
}