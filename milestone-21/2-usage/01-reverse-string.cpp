#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    stack<int> sr;
    while(!s.empty()){
        sr.push(s.top());
        s.pop();
    }

    while(!sr.empty()){
        cout << sr.top() << " ";
        sr.pop();
    }
    
    cout << endl;
    return 0;
}