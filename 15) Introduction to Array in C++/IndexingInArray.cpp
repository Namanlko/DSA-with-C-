// Indexing in Array: Array elements can be accessed with the help of indexes.
// Array has zero based indexing. If our array is of size=n, then index will lie from 0 to (n-1) (Both Inclusive).

#include<iostream>
using namespace std;

int main(){
    
    int arr[5] = {10,20,30,40,50};

    cout<<"At index 0: "<<arr[0]<<endl;
    cout<<"At index 1: "<<arr[1]<<endl;
    cout<<"At index 2: "<<arr[2]<<endl;
    cout<<"At index 3: "<<arr[3]<<endl;
    cout<<"At index 4: "<<arr[4]<<endl;
    
    return 0;
}