// Question 1: Write a program to print the maximum element present in an array.

#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {1,2,3,4,5};
    int max = INT16_MIN;

    for(int i=0; i<=5; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    cout<<"Maximum element present in array is "<<max<<endl;

    return 0;
}