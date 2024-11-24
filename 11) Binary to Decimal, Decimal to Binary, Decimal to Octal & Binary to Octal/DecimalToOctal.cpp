// Decimal to Octal Conversion:

#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;

    int ans=0,i=0,mul=1;

    while(num>0){
        int rem = num % 8;
        ans = ans + rem*mul;
        num = num/8;
        mul = mul*10; 
    }

    cout<<ans;
    
    return 0;
}