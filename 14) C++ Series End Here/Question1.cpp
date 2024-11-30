// Question 1: Write a function to convert 'a' into 'A'.

#include<iostream>
using namespace std;

char Change(char ch){
    return char(ch-32);
}

int main(){
    
    cout<<Change('a')<<endl;
    cout<<Change('b')<<endl;
    cout<<Change('c')<<endl;
    cout<<Change('d')<<endl;
    cout<<Change('e')<<endl;
    cout<<Change('f')<<endl;
    cout<<Change('g')<<endl;

    return 0;
}