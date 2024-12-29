// Sorting in Array: Sorting is the process of arranging the elements of an array in a specific order, such as ascending (smallest to largest) or descending (largest to smallest). Sorting helps make data easier to search and analyze.

// Selection Sort:
// Insertion Sort is a simple and efficient algorithm that sorts an array by dividing it into two parts: sorted and unsorted. Elements from the unsorted part are picked one by one and inserted into their correct position in the sorted part.

// Example:
// Array: {5, 3, 4, 1, 2}

//     Pass 1: {3, 5, 4, 1, 2} (Insert 3 before 5).
//     Pass 2: {3, 4, 5, 1, 2} (Insert 4 before 5).
//     Pass 3: {1, 3, 4, 5, 2} (Insert 1 before 3).
//     Pass 4: {1, 2, 3, 4, 5} (Insert 2 before 3).

#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
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
    InsertionSort(arr,5);
    PrintArray(arr,5);

    return 0;
}

// Time Complexity:
// 1) Best Case: O(n)
// 2) Average Case: (n*n)
// 3) Worst Case: (n*n)

// Space Complexity: O(1)
