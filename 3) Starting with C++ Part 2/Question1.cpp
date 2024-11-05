// Question 1: Write a program to check whether a number is even or odd.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter Number :)"<<endl;
    cin>>n;

    if(n%2==0){
        cout<<"Even No";
    }
    else{
        cout<<"Odd No";
    }

    return 0;
}