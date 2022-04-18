// Tower of Hanoi

#include<iostream>
using namespace std;

void solve(int n, int s, int d, int t ){
    if(n==1){
        cout << "Move disk 1 from " << s << " to " << d << endl;
        return;
    }
    solve(n-1, s, t, d);
    cout << "Move disk " << n << " from " << s << " to " << d << endl;
    solve(n-1, t, d, s);
}

int main() {
    int n;
    // cin>>n;

    n = 3;

    int s = 1, d = 2, t = 3;

    solve(n, s, d, t);

    return 0;
}