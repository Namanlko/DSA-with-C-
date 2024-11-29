// Question 7: Write a function to swap to numbers.
// Note: We can also use inbuilt swap finction like this. Ex- swap(a,b)

#include<iostream>
using namespace std;

void Swap(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

int main(){
    
    int a = 5;
    int b = 10;

    cout<<"Value of a Before Swap: "<<a<<endl;
    cout<<"Value of b Before Swap: "<<b<<endl;

    Swap(a,b);

    cout<<"Value of a After Swap: "<<a<<endl;
    cout<<"Value of b After Swap: "<<b<<endl;

    return 0;
}