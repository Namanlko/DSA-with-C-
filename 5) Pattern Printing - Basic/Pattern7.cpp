// Pattern 7: Write a program to print the following pattern.

// a a a a a 
// b b b b b
// c c c c c 
// d d d d d 
// e e e e e

#include<iostream>
using namespace std;

int main(){
    
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cout<<char('a'+i-1)<<" ";
        }
        cout<<endl;
    }

    return 0;
}