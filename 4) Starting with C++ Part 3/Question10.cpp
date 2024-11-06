// Question 10: Write a program to check a number is Prime Number or not.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter Number :)"<<endl;
    cin>>n;

    bool flag = true;

    for(int i=2; i<n; i++){
        if(n%i == 0){
            flag = false;
            break;
        }
    }

    if(flag){
        cout<<"Prime No :)";
    }
    else{
        cout<<"Not Prime No :(";
    }

    return 0;
}