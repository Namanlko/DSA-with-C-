// Pattern 5: Write a program to print the following pattern.

// a
// b b
// c c c
// d d d d
// e e e e e

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<char('a'+i-1)<<" ";
        }
        cout<<endl;
    }

    return 0;
}