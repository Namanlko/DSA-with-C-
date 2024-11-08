// Pattern 2: Write a program to print the following pattern.

// 10 10 10 10 10
// 10 10 10 10 10
// 10 10 10 10 10
// 10 10 10 10 10

#include<iostream>
using namespace std;

int main(){
    
    for(int i=1; i<=4; i++){
        for(int j=1; j<=5; j++){
            cout<<"10 ";
        }
        cout<<endl;
    }
    
    return 0;
}