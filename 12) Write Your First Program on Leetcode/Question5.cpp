// Question 5: Write a program to return the square root of a number rounded down to the nearest integer. Leetcode Question 69.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int i=0;

    while(i*i<=n){
        i++;
    }

    cout<<i-1<<endl;

    return 0;
}