// Question 9: Write a program to print the factorial of a number.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter Value of n?"<<endl;
    cin>>n;

    int fact = 1;

    for(int i=1; i<=n; i++){
        fact = fact * i;
    }

    cout<<"Factorial is "<<fact;

    return 0;
}