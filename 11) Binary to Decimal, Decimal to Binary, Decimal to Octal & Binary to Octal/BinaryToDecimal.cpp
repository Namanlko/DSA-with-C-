// Binary to Decimal Conversion:

#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;

    int ans=0,i=0,mul=1;

    // Using Modulus Operator:
    while(num>0){
        int rem = num % 10;
        ans = ans + rem*mul;
        num = num/10;
        mul = mul*2; 
    }

    // Using Bitwise & Operator:
    while(num>0){
        int rem = num & 1;
        ans = ans + rem*mul;
        num = num/10;
        mul = mul*2; 
    }

    cout<<ans;
    
    return 0;
}