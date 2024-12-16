// Question 1: Write a program to sum all the elements of an array.

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    int sum = 0;

    for(int i=0; i<10; i++){
        sum = sum + arr[i];
    }

    cout<<"Sum of all elements of array are: "<<sum;

    return 0;
}