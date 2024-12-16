// Question 7: Write a program to rotate elements of array by 1.

#include<iostream>
using namespace std;

int main(){

    int arr[] = {2,7,4,11,5,8};
    int size = 6;

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int temp = arr[0];

    for(int i=0; i<size; i++){
        arr[i] = arr[i+1];
    } 
    arr[size-1] = temp;


    cout<<"Rotated Array Are: "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}