// Continue Statement: Continue statement is used to skip the rest of the code in the current iteration of a loop and move to the next iteration. Unlike break, it doesn't terminate the loop; it just jumps to the next iteration.

#include<iostream>
using namespace std;

int main(){

    // Example - Continue Statement

    for(int i=1; i<=10; i++){
        if(i==6){
            continue;
        }
        cout<<i<<" ";
    }

    return 0;
}