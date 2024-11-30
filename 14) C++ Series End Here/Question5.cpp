// Question 5: Write a program to count the total moves of a Bishop(Uut) in Chess (8X8). Interview Bit Question.

#include<iostream>
using namespace std;

int bishopSteps(int A, int B) {
    
    int a = (8-A<8-B)?(8-A):(8-B);
    int b = (A-1<B-1)?(A-1):(B-1);
    int c = (8-A<B-1)?(8-A):(B-1);
    int d = (A-1<8-B)?(A-1):(8-B);
    
    int total = a+b+c+d;
    return total;
}

int main(){
    
    cout<<"Test Case 1: "<<bishopSteps(4, 4)<<" (Expected: 13)"<<endl;
    cout<<"Test Case 2: "<<bishopSteps(1, 1)<<" (Expected: 7)"<<endl;
    cout<<"Test Case 3: "<<bishopSteps(8, 8)<<" (Expected: 7)"<<endl;
    cout<<"Test Case 4: "<<bishopSteps(8, 4)<<" (Expected: 7)"<<endl;
    cout<<"Test Case 5: "<<bishopSteps(4, 1)<<" (Expected: 7)"<<endl;
    cout<<"Test Case 6: "<<bishopSteps(5, 5)<<" (Expected: 13)"<<endl;
    cout<<"Test Case 7: "<<bishopSteps(2, 7)<<" (Expected: 9)"<<endl;

    return 0;
}