// Question 3:  Write a program to print all the even numbers till n using while loop.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        if(i%2==0){
            cout<<i<<" ";
        }
        i++;
    }

    return 0;
}