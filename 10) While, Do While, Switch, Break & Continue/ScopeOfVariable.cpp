// Scope of a Variable: The scope of a variable refers to the part of the program where the variable is accessible or can be used. There are two main types of scopes for variables:

// 1) Local Scope: A variable declared inside a function or a block (enclosed by {}) has local scope. It is accessible only within that block or function.

// 2) Global Scope: A variable declared outside all functions has global scope. It is accessible from any part of the program after its declaration.

#include <iostream>
using namespace std;

int globalVar = 10; // Global Variable

int main() {

    // Access global variable
    cout<<"Global Variable Value: "<<globalVar<<endl;

    int localVar = 20;
    // Access local variable
    cout<<"Local Variable Value: "<<localVar<<endl;

    return 0;
}
