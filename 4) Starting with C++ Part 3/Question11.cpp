// Question 11: Write a program to print fibonacci series.
// 0 1 1 2 3 5 8 13 21 31

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter Number :)"<<endl;
    cin>>n;

    int a=0, b=1,c;

    for(int i=2; i<=n; i++){
        c = a+b;
        a = b;
        b = c;
    }

    cout<<b<<endl;
    

    return 0;
}