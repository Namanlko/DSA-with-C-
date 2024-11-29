// Function Overloading: Function overloading in C++ is a feature that allows multiple functions to have the same name but differ in the type, number, or order of their parameters.

#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Overloaded function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Overloaded function to add two floats
float add(float a, float b) {
    return a + b;
}

int main() {
    cout<<"Add two integers: "<<add(2, 3)<<endl;          // Calls add(int, int)
    cout<<"Add three integers: "<<add(1, 2, 3)<<endl;    // Calls add(int, int, int)
    cout<<"Add two floats: "<<add(1.5f, 2.5f)<<endl;     // Calls add(float, float)
    return 0;
}
