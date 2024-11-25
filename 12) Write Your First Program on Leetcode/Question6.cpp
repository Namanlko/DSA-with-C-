// Question 6: Write a program to check if the given number is pallindrome or not. Leetcode Question 9.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int num = n;
    int sum = 0;

    while(n>0){
        int digit = n%10;
        n = n/10;
        sum = sum*10 + digit;

        if(sum>INT16_MAX/10){
            cout<<"Overflow Error!"<<endl;
        }

    }

    if(num==sum){
        cout<<"Number is Pallindrome :)"<<endl;
    }
    else{
        cout<<"Number is not Pallindrome :("<<endl;
    }


    return 0;
}