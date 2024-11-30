// Question 3: Write a program to find the trailing zero in a fact. GFG Question.

#include <iostream>
#include <cmath>
using namespace std;

int trailingZeros(int n) {
    int count = 0;

    while(n>=5){
        int ans = n/5;
        count = count + ans;
        n = n/5;
    }
    return count;
}


int main() {

    cout<<trailingZeros(1)<<endl;
    cout<<trailingZeros(2)<<endl;
    cout<<trailingZeros(3)<<endl;
    cout<<trailingZeros(4)<<endl;
    cout<<trailingZeros(5)<<endl;
    cout<<trailingZeros(6)<<endl;
    cout<<trailingZeros(7)<<endl;
    cout<<trailingZeros(8)<<endl;
    cout<<trailingZeros(9)<<endl;
    cout<<trailingZeros(10)<<endl;

    return 0;
}
