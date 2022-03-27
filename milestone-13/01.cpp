#include<iostream>
using namespace std;

void recurFunction(int i){
    if(i==51){
        return;
    }
    cout<<i<<" ";
    recurFunction(i+1);
}

int main() {
    recurFunction(1);
    
    return 0;
}