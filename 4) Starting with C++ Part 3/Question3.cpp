// Question 3: Write a program to print n number in reverse order.

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter Value of n?"<<endl;
    cin>>n;

    for(int i=n; i>=1; i--){
        cout<<i<<" ";
    }

    return 0;
}