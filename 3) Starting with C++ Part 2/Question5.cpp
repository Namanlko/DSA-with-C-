// Question 5: Write a program to check whether entered character is vowel or consonent.

#include<iostream>
using namespace std;

int main(){
    
    char ch;
    cout<<"Enter Character :)"<<endl;
    cin>>ch;

    if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        cout<<"Vowel :)";
    }
    else{
        cout<<"Consonent :)";
    }

    return 0;
}