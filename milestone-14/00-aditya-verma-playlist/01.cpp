// Print 1 - N numbers using recursion

#include <iostream>
using namespace std;

void printNumber(int n){
    // Base case
    if(n==0){
        return;
    }
    printNumber(n-1);   // Induction Step
    cout << n << endl;
}

int main() {
    int n;
    n=100;

    printNumber(n);

    return 0;   
}