// Question 2: Write a program to check if a number is armstrong or not.

#include <iostream>
#include <cmath>
using namespace std;

// Function to count digits in a number
int countDigit(int n) {
    
    if(n==0){
        return 1;
    }
    
    int count = 0;
    while (n>0) {
        count++;
        n = n/10;
    }
    return count;
}

// Function to check if a number is an Armstrong number
bool armStrong(int n) {
    int ans = n;
    int Digits = countDigit(n);
    int sum = 0;

    while(n>0) {
        int digit = n%10;
        sum = sum + pow(digit, Digits);
        n = n/10;
    }

    return ans==sum; // Direct comparison
}

int main() {
    // Test case
    cout<<armStrong(153)<<endl;  // Output: 1 (true)
    cout<<armStrong(9474)<<endl; // Output: 1 (true)
    cout<<armStrong(123)<<endl;  // Output: 0 (false)

    return 0;
}
