// Staircase Problem

#include <iostream>
using namespace std;

int findSteps(int n){
    if(n < 0) return 0;
    else if(n == 0) return 1;
    else return findSteps(n-1) + findSteps(n-2) + findSteps(n-3);
}

int main() {
    int n;
    n=4;
    cout << "Staircase Problem" << endl;
    cout << findSteps(n) << endl;

    return 0;
}