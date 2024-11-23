// Do While Loop: Do While loop is similar to a while loop, but with one key difference, the block of code inside the loop is executed at least once, regardless of whether the condition is true or false. This is because the condition is evaluated after the execution of the loop body.

#include<iostream>
using namespace std;

int main(){

    // Example - Printing No 1 to 10 using do while loop.

    int i=1;
    do{
        cout<<i<<" ";
        i++;
    }
    while(i<=10);

    return 0;
}