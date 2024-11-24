// Octal to Decimal Conversion:

#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;

    int ans=0,i=0,mul=1;

    while(num>0){
        int rem = num % 10;
        ans = ans + rem*mul;
        num = num/10;
        mul = mul*8; 
    }

    cout<<ans;
    
    return 0;
}