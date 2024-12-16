// Question 2: Write a function to search an element in an array.

#include<iostream>
using namespace std;

int Search(int arr[],int n, int size){
    for(int i=0; i<size; i++){
        if(arr[i]==n){
            return i;
        }
    }
    return -1;
}

int main(){
    
    int arr[5] = {1,2,3,4,5};

    cout<<Search(arr,1,5)<<endl;
    cout<<Search(arr,2,5)<<endl;
    cout<<Search(arr,3,5)<<endl;
    cout<<Search(arr,4,5)<<endl;
    cout<<Search(arr,5,5)<<endl;

    return 0;
}