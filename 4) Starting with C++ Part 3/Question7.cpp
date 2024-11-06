// Question 7: Write a program to print the sum of first n natural numbers.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter Value of n?"<<endl;
    cin>>n;

    int sum = 0;

    for(int i=1; i<=n; i++){
        sum = sum + i;
    }

    cout<<"Sum = "<<sum;

    cout<<"\nOptimized Approach:\n";
    int ans = (n*(n+1))/2;
    cout<<"Sum = "<<ans;

    return 0;
}