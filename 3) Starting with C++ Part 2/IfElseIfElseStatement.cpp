// If Else-If Else Statement Example: Check wether a number is +ve, -ve or zero.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter Number :)"<<endl;
    cin>>n;
    
    if(n>0){
        cout<<"Positive N0:";
    }

    else if(n==0){
        cout<<"Zero N0:";
    }

    else {
        cout<<"Negative N0:";
    }
    
    return 0;
}