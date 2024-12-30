// Leetcode Question 35: Write a program to find the insertion position of an element in an array.

#include<iostream>
using namespace std;

int InsertionPosition(int arr[], int n, int key){
    int start=0, end=n-1,ans = 0, mid=0;

    while(start<=end){
        mid = start + (end-start)/2;
        if(arr[mid] == key){
            ans = mid;
            break;
        }
        else if (arr[mid]<key){
            start = mid+1;
        }
        else{
            ans = mid;
            end = mid-1;
        }
    }
    return ans;
}

int main(){
    
    int arr[] = {1,4,6,8,10,14,16,18};
    cout<<"Position is "<<InsertionPosition(arr,8,5);

    return 0;
}