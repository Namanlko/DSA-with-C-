// Question 2: Write a program to check whether a person is Adult or Teenager based on it age.

#include<iostream>
using namespace std;

int main(){
    
    int age;
    cout<<"Enter Age :)"<<endl;
    cin>>age;

    if(age>=18){
        cout<<"Adult!";
    }
    else{
        cout<<"Teenager!";
    }

    return 0;
}