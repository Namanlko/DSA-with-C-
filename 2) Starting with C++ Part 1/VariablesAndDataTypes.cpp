// 3) Variables and Data Types in C++:

// Variables are the name given to a memory location that hold data values, allowing program to maipulate the information. Variables are defined by specifying a data type and a name, which determines what kind of data they can hold.

// Data Types in C++ specify the type of data that a variable can store. Common data types include:

// 1) int Ex: 5, -10
// 2) float and double Ex: 3.14, -0.01
// 3) char Ex: 'A', 'Z'
// 4) bool Ex: true or false
// 5) string Ex: "Hello"

#include<iostream>
using namespace std;

int main(){
    
    // 1) Integer Data Type:
    int a = 8;
    cout<<"Value of a is "<<a<<endl;

    // 2) Float Data Type:
    float b = 3.14;
    cout<<"Value of b is "<<b<<endl;

    // 3) Double Data Type:
    double c = 8.78345;
    cout<<"Value of c is "<<c<<endl;

    // 4) Character Data Type:
    char d = 'A';
    cout<<"Value of d is "<<d<<endl;

    // 5) Boolean Data Type:
    bool flag = true;
    cout<<"Value of flag is "<<flag<<endl;

    // 6) String Data Type:
    string st = "Hello";
    cout<<"Value of st is "<<st<<endl;

    return 0;
}