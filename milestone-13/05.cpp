// Write a program in C to count the digits of a given number using recursion

#include<iostream>
using namespace std;

int countDigits(int n, int count){
    if(n==0){
        return count;
    }

    countDigits(n/10, count+1);
}

int main() {
    int n;
    n = 5000;

    int count = 0;
    count = countDigits(n, count);

    cout << count;

    return 0;
}