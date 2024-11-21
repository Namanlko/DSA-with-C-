// Question 2: Write a program to check if a given character is vowel or consonent.

#include<iostream>
using namespace std;

int main(){
    
    char ch;
    cin>>ch;

    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        cout<<"Vowel :)";
    }
    else{
        cout<<"Consonent :)";
    }

    return 0;
}