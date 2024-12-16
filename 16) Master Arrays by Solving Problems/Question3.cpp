// Question 3: Write a program to reverse an array.

#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {1,2,3,4,5};

    // Using Two Pointer Approach:
    int i=0;
    int j=4;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    
    cout<<"Reverse Array is: "<<endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}