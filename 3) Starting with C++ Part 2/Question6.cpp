// Question 6: Write a program to print week days with number.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter Number :)\n";
    cin>>n;

    if(n==1){
        cout<<"Monday :)";
    }
    else if(n==2){
        cout<<"Tuesday :)";
    }
    else if(n==3){
        cout<<"Wednesday :)";
    }
    else if(n==4){
        cout<<"Thursday :)";
    }
    else if(n==5){
        cout<<"Friday :)";
    }
    else if(n==6){
        cout<<"Saturday :)";
    }
    else if(n==7){
        cout<<"Sunday :)";
    }
    else{
        cout<<"Invalid No :|";
    }

    return 0;
}