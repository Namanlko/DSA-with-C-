// Here we will see bubble sort algorithm with swap variable.

#include<iostream>
using namespace std;

bool BubbleSort(int arr[], int n){
    int swapped = 0;
    for(int i=n-2; i>=0; i--){
        for(int j=0; j<=i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped++;
            }
        }
        if(swapped==0){
            break;
        }
    }
    return swapped;
}

void PrintArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    
    int arr[] = {3,5,2,1,4};
    PrintArray(arr,5);
    cout<<BubbleSort(arr,5)<<endl;
    PrintArray(arr,5);

    return 0;
}