// 2) Typecasting in C++:

#include<iostream>
using namespace std;

int main(){

    // 1) Implicit Type Casting:
    int a = 65;
    char c = a; // Data Loss may be possible.
    cout<<c<<endl;

    char b = 'a';
    int d = b; // Data Loss will not happen.
    cout<<d<<endl;

    // 2) Explicit Type Casting:

    float p = 3.14;
    int  e = (int)p;
    cout<<e<<endl;

    return 0;
}