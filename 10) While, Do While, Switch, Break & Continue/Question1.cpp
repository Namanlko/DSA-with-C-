// Question 1:  Write a program to print the table of a given number using while loop.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int i=1;
    while(i<=10){
        cout<<n*i<<endl;
        i++;
    }

    return 0;
}