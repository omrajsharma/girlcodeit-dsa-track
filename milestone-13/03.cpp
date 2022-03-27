#include<iostream>
using namespace std;

void recur(int i, int j, int start, int end) {
    if(start==end){
        return;
    }
    cout << i << " ";
    recur(j, i+j, start+1, end);
}

int main() {
    recur(1,1,0,10);

    return 0;
}