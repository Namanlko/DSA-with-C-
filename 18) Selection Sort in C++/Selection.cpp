// Sorting in Array: Sorting is the process of arranging the elements of an array in a specific order, such as ascending (smallest to largest) or descending (largest to smallest). Sorting helps make data easier to search and analyze.

// Selection Sort:
// It works by repeatedly selecting the smallest (or largest) element from the unsorted part of the array and moving it to the sorted part.

// Steps for Selection Sort:

// 1) Divide the array into a sorted and unsorted part.
// 2) Find the smallest element in the unsorted part.
// 3) Swap it with the first element of the unsorted part.
// 4) Repeat the process for the next position until the entire array is sorted.

// Example:
// Unsorted Array : [3,5,2,1,4]
// Array after Step 1: [1,5,2,3,4]
// Array after Step 2: [1,2,5,3,4]
// Array after Step 3: [1,2,3,5,4]
// Array after Step 4: [1,2,3,4,5]
// Final Sorted Array : [1,2,3,4,5]

#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int index = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[index]){
                index = j;
            }
        }
        swap(arr[i],arr[index]);
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
    SelectionSort(arr,5);
    PrintArray(arr,5);

    return 0;
}

// Time Complexity:
// 1) Best Case: O(n*n)
// 2) Average Case: (n*n)
// 3) Worst Case: (n*n)

// Space Complexity: O(n)
