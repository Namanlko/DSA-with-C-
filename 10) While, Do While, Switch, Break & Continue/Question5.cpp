// Question 5:  Write a program to print sum of n natural numbers using do while loop.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int i=1;
    int sum=0;
    
    do{
        sum = sum + i;
        i++;
    }
    while(i<=n);

    cout<<"Sum is "<<sum;

    return 0;
}