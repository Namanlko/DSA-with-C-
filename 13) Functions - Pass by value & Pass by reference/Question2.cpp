// Question 2: Write a function to check if a number is prime or not.

#include<iostream>
using namespace std;

bool Prime(int n){
    if(n<2){
        return 0;
    }
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    cout<<Prime(31)<<endl;
    return 0;
}