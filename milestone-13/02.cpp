#include<iostream>
using namespace std;

void recur(int i, int j, int sum){
    if(i==j+1){
        cout << sum << endl;
        return;
    }
    recur(i+1, j, sum+i);
}

int main() {
    recur(1,5,0);
    
    return 0;
}