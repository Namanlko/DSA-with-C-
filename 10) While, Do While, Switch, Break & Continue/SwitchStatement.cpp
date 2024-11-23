// Switch Statement: Switch statement is a control flow structure that allows a variable to be tested for equality against multiple values. It provides an alternative to long chains of if-else statements when comparing a single variable against several constants.

#include<iostream>
using namespace std;

int main(){

    // Example - Switch Statement
    
    int day;

    cout<<"Enter Day Number :";
    cin>>day;

    switch(day){
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<< endl;
            break;
        case 4:
            cout<<"Thursday"<<endl;
            break;
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<<"Saturday"<<endl;
            break;
        case 7:
            cout<<"Sunday"<<endl;
            break;
        default:
            cout<<"Invalid Input!"<<endl;
    }

    return 0;
}