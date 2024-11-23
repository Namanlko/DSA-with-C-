// Break Statement: Break statement is used to terminate the execution of a loop or a switch statement immediately. When encountered, it exits the innermost loop or switch block in which it resides and continues execution from the next statement outside the block.

#include<iostream>
using namespace std;

int main(){

    // Example - Break Statement

    for(int i=1; i<=10; i++){
        if(i==6){
            break;
        }
        cout<<i<<" ";
    }

    return 0;
}