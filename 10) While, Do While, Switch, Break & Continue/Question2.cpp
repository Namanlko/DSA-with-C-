// Question 2:  Write a program to print the factors of a given number using while loop.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        if(n%i==0){
            cout<<i<<" ";
        }
        i++;
    }

    return 0;
}