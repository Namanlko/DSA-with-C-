// Question 4: Write a program to check if a number belongs to the power of 2. Leetcode Question 231.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    if(n<0){
        cout<<"Invalid Input!"<<endl;
    }

    while(n!=1){
        if(n%2==1){
            cout<<"Not Power of 2 :("<<endl;
        }
        n = n/2;
    }

    return 0;
}