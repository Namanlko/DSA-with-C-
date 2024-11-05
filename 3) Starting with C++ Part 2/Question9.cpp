// Question 9: Write a program to print n natural numbers.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter Value of n?"<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }

    return 0;
}