// Question 3: Write a function to return the factorial of a number.

#include<iostream>
using namespace std;

int Fact(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    cout<<Fact(7)<<endl;
    return 0;
}