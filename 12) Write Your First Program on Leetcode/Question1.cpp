// Question 1: Write a program to add digits of a number until it reach a single digit. Leetcode Question 258.

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    while(n>9){
        int ans=0;
        int digit=0;
    
        while(n>0){
            digit = n%10;
            ans = ans + digit;
            n = n/10;
        }
        n = ans;
    }

    cout<<n;
    
    return 0;
}