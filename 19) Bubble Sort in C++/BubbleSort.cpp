// Sorting in Array: Sorting is the process of arranging the elements of an array in a specific order, such as ascending (smallest to largest) or descending (largest to smallest). Sorting helps make data easier to search and analyze.

// Selection Sort:
// Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The process is repeated until the list is sorted.

// Example:
// Array Is: [4,3,2,1]
// Step 1: [3,2,1,4]
// Step 2: [2,1,3,4]
// Sorted Array: [1,2,3,4]

#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n){
    for(int i=n-2; i>=0; i--){
        for(int j=0; j<=i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
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
    BubbleSort(arr,5);
    PrintArray(arr,5);

    return 0;
}

// Time Complexity:
// 1) Best Case: O(n)
// 2) Average Case: (n*n)
// 3) Worst Case: (n*n)

// Space Complexity: O(n)
