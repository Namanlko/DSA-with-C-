// Pass By Value: In this parameter passing method, values of the actual parameters are copied to the function's formal parameters. The actual and formal parameters are stored in different memeory locations so any changes made in the functions are not reflected in the actual parameters of the caller.

// Pass By Reference: In this parameter passing method, both actual and formal parameters refer to the same memory locations, so any changes made inside the function are reflected in the actual parameters of the caller.

#include<iostream>
using namespace std;

void passByValue(int x){
    x = 10;
}

void passByReference(int &x){
    x = 10;
}

int main(){
    
    int a = 5;
    int b = 5;

    passByValue(a);
    cout<<"After Pass By Value: "<<a<<endl;

    passByReference(b);
    cout<<"After Pass By Reference: "<<b<<endl;

    return 0;
}