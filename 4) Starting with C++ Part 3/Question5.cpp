// Question 5: Write a program to print the table of a given number.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter Number :)"<<endl;
    cin>>n;

    for(int i=1; i<=10; i++){
        cout<<n<<" X "<<i<<" = "<<(n*i)<<endl;
    }

    cout<<"\nOther Way of Writing Code:\n"<<endl;
    for(int i=n; i<=n*10; i=i+n){
        cout<<i<<endl;
    }

    return 0;
}