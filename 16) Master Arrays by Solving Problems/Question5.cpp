// Question 5: Write a program to print the missing number in an array from 1 to n.

#include<iostream>
using namespace std;

int main(){
    
    int n = 5;
    int arr[] = {1,2,3,5};

    int sum1=0, sum2=0;
    for(int i=0; i<4; i++){
        sum1 = sum1 + arr[i];
    }

    sum2 = (n*(n+1))/2;

    cout<<"Missing Number is "<<(sum2 - sum1)<<endl;

    return 0;
}