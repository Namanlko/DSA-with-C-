// Leetcode Question 69: Optimized Code: Write a program to find the square root of a given number (only integer part).

#include<iostream>
using namespace std;

int mySqrt(int n){
    int start=0, end=n,ans=0;

    if (n<=2){
        return n;
    }

    while(start<=end){
        int mid = start + (end-start)/2;
        if(mid == n/mid){
            return mid;
        }
        else if(mid<n/mid){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int main(){

    cout<<mySqrt(100)<<endl;
    cout<<mySqrt(1)<<endl;
    cout<<mySqrt(8)<<endl;
    
    return 0;
}