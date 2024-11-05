// Question 10: Write a program to print all even number upto n.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter Value of n?"<<endl;
    cin>>n;

    for(int i=2; i<=n; i++){
        if(i%2 == 0){
            cout<<i<<" ";
        }
    }

    cout<<"\nOptimized Code :\n";

    for(int i=2; i<=n; i=i+2){
            cout<<i<<" ";
    }
    return 0;
}