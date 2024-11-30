// Question 6: In the Nim Game, there is a heap of nn stones, and two players take turns removing 1 to 3 stones, with you going first. The player who removes the last stone wins. Given nn, determine if you can win assuming both players play optimally. Leetcode Question 292.

#include<iostream>
using namespace std;

bool canWinNim(int n) {
        if(n%4==0){
            return 0;
        }
        else{
            return 1;
        }
    }

int main(){
    
    cout<<"Test Case 1: "<<canWinNim(4)<<" (Expected: 0)"<<endl;
    cout<<"Test Case 2: "<<canWinNim(5)<<" (Expected: 1)"<<endl;
    cout<<"Test Case 3: "<<canWinNim(20)<<" (Expected: 0)"<<endl;
    cout<<"Test Case 4: "<<canWinNim(21)<<" (Expected: 1)"<<endl;
    cout<<"Test Case 5: "<<canWinNim(1)<<" (Expected: 1)"<<endl;

    return 0;
}