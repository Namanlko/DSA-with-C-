// Question 4: Write a program to find the second maximum number in an array.

#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};

    int max = INT16_MIN;
    for(int i=0; i<5; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    int secMax = 0;
    for(int i=0; i<5; i++){
        if(arr[i]>secMax && arr[i]!=max){
            secMax = arr[i];
        }
    }

    cout<<"Second Maximum value is "<<secMax;


    
    return 0;
}