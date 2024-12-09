// Initializing and Printing an Array using Loop: We can inilialize and print the values of an array using for loop as follows.

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int arr[n];

    cout<<"Enter elements of Array :)"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Elements of Array are as follows :)"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}