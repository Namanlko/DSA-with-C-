// Question 7: Write a program to print the complement of a base 10 integer. Leetcode Question 1009.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int ans=0, rem=0, mul=1;

    if(n==0){
        return 1;
    }

    while(n>0){
        rem = n%2;
        rem = rem^1;
        n = n/2;
        ans = ans + rem*mul;
        mul = mul*2;
    }

    cout<<ans<<endl;

    return 0;
}