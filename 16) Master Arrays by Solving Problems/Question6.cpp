// Question 6: Write a program for Fibonacci Series in an array.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int arr[1000];

    arr[0] = 0;
    arr[1] = 1;

    for(int i=2; i<=n; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }

    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    cout<<n<<"th Fibonacci No is "<<arr[n-1];


    return 0;
}