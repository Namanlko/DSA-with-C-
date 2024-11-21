// Bitwise Operator: Bitwise operators work directly on the binary representation of integers. They operate bit by bit. 

// The common bitwise operators in C++ are:
// 1) & (Bitwise AND): Sets each bit to 1 if both corresponding bits are 1.
// 2) | (Bitwise OR): Sets each bit to 1 if at least one corresponding bit is 1.
// 3) ^ (Bitwise XOR): Sets each bit to 1 if corresponding bits are different.
// 4) ~ (Bitwise NOT): Inverts all bits.
// 5) << (Left Shift): Shifts bits to the left, filling with 0s on the right.
// 6) >> (Right Shift): Shifts bits to the right, discarding bits on the right.

#include<iostream>
using namespace std;

int main(){
    
    int a = 1, b = 0; // Binary of 1: 01, Binary of 0: 00

    cout<<"a & b:"<<(a & b)<<endl;  
    cout<<"a | b:"<<(a | b)<<endl;  
    cout<<"a ^ b:"<<(a ^ b)<<endl;  
    cout<<"~a:"<<(~a)<<endl;         
    cout<<"a << 1:"<<(a << 1)<<endl; 
    cout<<"a >> 1:"<<(a >> 1)<<endl; 

    return 0;
    
}