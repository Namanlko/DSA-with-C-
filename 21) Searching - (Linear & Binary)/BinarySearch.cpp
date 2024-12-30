// Leetcode Question 704: Binary Search - Binary Search is an efficient algorithm that works only on sorted arrays. It divides the search space in half in each step, significantly reducing the search time.

#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;

    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if (arr[mid]>key){
            end = mid - 1;
        }
        else if (arr[mid]<key){
            start = mid + 1;
        }
    }

    return -1;
}

int main(){

    int arr[] = {2,4,6,8,10};
    int target = 8;

    cout<<"Element 8 is found at index "<<BinarySearch(arr,5,8)<<endl;
    
    return 0;
}