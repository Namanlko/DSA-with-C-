// Leetcode Question 34: Write a program to find the first and last occurence of an element present in an array.

#include<iostream>
using namespace std;

void FirstAndLast(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int first = -1, last = -1;

    // First Element:
    while(start<=end){
        
        int mid = start + (end-start)/2;

        if(arr[mid]==key){
            first = mid;
            end = mid - 1;
        }
        else if(arr[mid]>key){
            end = mid - 1; 
        }
        else{
            start = mid + 1;
        }
    }

    // Last Element:
    start = 0;
    end = n-1;
    while(start<=end){
        
        int mid = start + (end-start)/2;

        if(arr[mid]==key){
            last = mid;
            start = mid + 1;
        }
        else if(arr[mid]>key){
            end = mid - 1; 
        }
        else{
            start = mid + 1;
        }
    }

    cout<<"First Occurence is "<<first<<endl;
    cout<<"Last Occurence is "<<last<<endl;

}

int main(){
    
    int arr[] = {5,7,7,8,8,10};
    FirstAndLast(arr,5,8);

    return 0;
}