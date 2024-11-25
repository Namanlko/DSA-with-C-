// Question 3: Write a program to reverse an integer number. Leetcode Question 7.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int ans = 0;
    while(n>0){
        int digit = n%10;
        n = n/10;

        if(ans>INT16_MAX/10 || ans<INT16_MIN/10){
            cout<<"Overflow Error!"<<endl;
        }

        ans = ans*10 + digit;
    }

    cout<<ans<<endl;

    return 0;
}