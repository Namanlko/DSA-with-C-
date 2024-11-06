// Question 6: Write a program to calculate the power of a given number.

#include<iostream>
using namespace std;

int main(){
    
    int n, pow, num;
    cout<<"Enter Number :)"<<endl;
    cin>>n;
    cout<<"Enter Power :)"<<endl;
    cin>>pow;

    num = n;

    for(int i=1; i<pow; i++){
        num = num*n;
    }

    cout<<"Result = "<<num;

    return 0;
}