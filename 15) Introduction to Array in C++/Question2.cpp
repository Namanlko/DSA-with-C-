// Question 2: Write a program to print the minimum element present in an array.

#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {1,2,3,4,5};
    int min = INT16_MAX;

    for(int i=0; i<=5; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }

    cout<<"Minimum element present in array is "<<min<<endl;

    return 0;
}