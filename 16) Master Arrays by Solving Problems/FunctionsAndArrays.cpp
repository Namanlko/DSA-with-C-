// We will learn here how we can pass an array inside a function.

#include<iostream>
using namespace std;

void Print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    
    int arr[] = {10,20,30,40,50};
    Print(arr,5);

    return 0;
}