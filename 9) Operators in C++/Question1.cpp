// Question 1: Write a program to print the largest of three numbers.

#include<iostream>
using namespace std;

int main(){
    
    int a,b,c;
    cin>>a>>b>>c;

    int max = a;

    if(b>max){
        max = b;
    }
    if(c>max){
        max = c;
    }

    cout<<"Maximum is "<<max;

    return 0;
}