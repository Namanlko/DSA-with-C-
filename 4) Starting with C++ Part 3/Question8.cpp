// Question 8: Write a program to print the sum of square of first n natural numbers.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter Value of n?"<<endl;
    cin>>n;

    int sum = 0;

    for(int i=1; i<=n; i++){
        sum = sum + i*i;
    }

    cout<<"Sum of Squares = "<<sum;

    return 0;
}