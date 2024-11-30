// Question 4: Write a program to check whether we can form a rectangle by given four numbers or not. Interview Bit Question.

#include<iostream>
using namespace std;

int Rectangle(int A, int B, int C, int D) {
    if((A==B && C==D)||(A==C && B==D)||(A==D && B==C)){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    
    cout<<"Test Case 1: "<<Rectangle(4, 4, 6, 6)<<" (Expected: 1)"<<endl;
    cout<<"Test Case 2: "<<Rectangle(6, 4, 6, 4)<<" (Expected: 1)"<<endl;
    cout<<"Test Case 3: "<<Rectangle(3, 5, 7, 9)<<" (Expected: 0)"<<endl;
    cout<<"Test Case 4: "<<Rectangle(3, 3, 4, 5)<<" (Expected: 0)"<<endl;
    cout<<"Test Case 5: "<<Rectangle(5, 5, 5, 5)<<" (Expected: 1)"<<endl;
    cout<<"Test Case 6: "<<Rectangle(0, 0, 4, 4)<<" (Expected: 1)"<<endl;
    cout<<"Test Case 7: "<<Rectangle(1000, 2000, 1000, 2000)<<" (Expected: 1)"<<endl;
    cout<<"Test Case 8: "<<Rectangle(-3, -3, -4, -4)<<" (Expected: 1)"<<endl;

    return 0;
}