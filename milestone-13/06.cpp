// Write a program in C to find the sum of digits of a number using recursion.

#include<iostream>
using namespace std;

void digitsSum(int n, int sum){
    if(n==0){
        cout << sum << endl;
        return;
    }

    sum += n%10;
    digitsSum(n/10, sum);
}

int main() {
    int n;
    n = 25;

    int sum = 0;
    digitsSum(n, sum);

    return 0;
}