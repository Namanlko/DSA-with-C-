// 3) If Else Statement Example 1: Package based Question.

#include<iostream>
using namespace std;

int main(){
    
    int package;
    cout<<"Enter Package Value :)"<<endl;
    cin>>package;

    if(package>10){
        cout<<"Accepted!";
    }
    else{
        cout<<"Rejected";
    }

    return 0;
}