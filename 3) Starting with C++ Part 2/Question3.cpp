// Question 3: Write a program to take marks as input and check if the student is pass or fail.

#include<iostream>
using namespace std;

int main(){
    
    int marks;
    cout<<"Enter Marks :)"<<endl;
    cin>>marks;

    if(marks>=30){
        cout<<"Passed!";
    }
    else{
        cout<<"Failed!";
    }

    return 0;
}