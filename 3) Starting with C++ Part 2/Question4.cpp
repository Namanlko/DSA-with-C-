// Question 4: Write a program to compare two variables.

#include<iostream>
using namespace std;

int main(){

    int a,b;
    
    cout<<"Enter Value of a?"<<endl;
    cin>>a;

    cout<<"Enter Value of b?"<<endl;
    cin>>b;

    if(a>b){
        cout<<"a is greater than b.";
    }
    else{
        cout<<"b is greater than a.";
    }

    return 0;
}