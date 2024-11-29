// Variable Sccping: Variable scoping in C++ determines the lifetime and visibility of a variable. A variable's scope defines where it can be accessed within a program.

#include <iostream>
using namespace std;

// Global variable
int globalVar = 100;

void Function() {
    int localVar = 50; // Local variable
    cout<<"Inside function, Local Variable:"<<localVar<<endl;
    cout<<"Inside function, Global Variable:"<<globalVar<<endl;
}

int main() {
    int localVar = 10; // Local variable in main
    cout<<"Inside main, Local Variable:"<<localVar<<endl;
    cout<<"Inside main, Global Variable:"<< globalVar<<endl;

    Function();

    return 0;
}
