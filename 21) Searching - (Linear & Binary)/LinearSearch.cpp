// Searching: Searching is a process of finding the location of a target element in a collection like array or list.

// There are two types of searching in an array.
// 1) Linear Search
// 2) Binary Search


// Linear Search: Linear Search is the simplest searching algorithm. It checks each element of the array one by one until the target element is found or the entire array is traversed. 

#include<iostream>
using namespace std;

int LinearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){

    int arr[] = {2,4,6,8,10};
    int target = 8;

    cout<<"Element 8 is found at index "<<LinearSearch(arr,5,8)<<endl;
    
    return 0;
}