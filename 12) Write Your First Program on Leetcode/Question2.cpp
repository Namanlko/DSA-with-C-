// Question 1: Write a program to check if a year is a leap year or not. GFG Question: 

#include<iostream>
using namespace std;

int main(){
    
    int year;
    cout<<"Enter Year :)"<<endl;
    cin>>year;

    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                cout<<"Leap Year :)"<<endl;
            }
            else{
                cout<<"Not Leap Year :)"<<endl;
            }
        }
        else{
            cout<<"Leap Year :)"<<endl;
        }
    }
    else{
        cout<<"Not Leap Year :)"<<endl;
    }

    return 0;
}