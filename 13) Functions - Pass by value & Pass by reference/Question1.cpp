// Question 1: Write a function to return sum of n natural numbers.

#include<iostream>
using namespace std;

int Sum(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum = sum + i;
    }
    return sum;
}

int main(){
    cout<<Sum(10)<<endl;
    return 0;
}