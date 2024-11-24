// Decimal to Binary Conversion:

#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;

    int ans=0,i=0,mul=1;

    // Using Modulus Operator:
    while(num>0){
        int rem = num % 2;
        ans = ans + rem*mul;
        num = num/2;
        mul = mul*10; 
    }

    // Using Bitwise & Operator:
    while(num>0){
        int rem = num & 1;
        ans = ans + rem*mul;
        num = num/2;
        mul = mul*10; 
    }

    cout<<ans;
    
    return 0;
}