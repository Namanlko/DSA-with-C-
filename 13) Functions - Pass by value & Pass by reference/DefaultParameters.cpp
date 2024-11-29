// Default Parameter:  Default parameter is a value that a function automatically uses if no argument is passed for that parameter when the function is called. Default parameters are specified in the function declaration or definition by assigning a default value to one or more parameters.

#include <iostream>
using namespace std;

// Function with a default parameter
void greet(string name="Guest") {
    cout<<"Hello, "<<name<<"!"<<endl;
}

int main() {
    // Call without an argument; uses the default parameter
    greet();  // Output: Hello, Guest!

    // Call with an argument; overrides the default parameter
    greet("Alice");  // Output: Hello, Alice!

    return 0;
}
