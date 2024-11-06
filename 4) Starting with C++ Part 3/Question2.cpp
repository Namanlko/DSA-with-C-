// Question 2: Write a program to print number letter from a to z.

#include<iostream>
using namespace std;

int main(){

    char ch = 'a';

    for(int i=0; i<=25; i++){
        cout<<char(ch + i)<<" ";
    }

    return 0;
}