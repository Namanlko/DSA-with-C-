// Pattern 8: Write a program to print the following pattern.

// a b c d e
// a b c d e
// a b c d e
// a b c d e
// a b c d e

#include<iostream>
using namespace std;

int main(){
    
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cout<<char('a'+j-1)<<" ";
        }
        cout<<endl;
    }

    return 0;
}