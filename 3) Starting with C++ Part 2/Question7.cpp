// Question 7: Write a program to print the square of number from 1 to n.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter Number :)"<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        cout<<i*i<<" ";
    }

    return 0;
}