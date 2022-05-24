#include <iostream>
using namespace std;
#define MAX_SIZE 100
int arr[MAX_SIZE];
int top = -1;

void push(int x){
    if(top == MAX_SIZE-1){
        cout << "Stack is full" << endl;
        return;
    }
    top++;
    arr[top] = x;
}

void pop(){
    if(top == -1){
        cout << "Stack is empty" << endl;
        return;
    }
    top--;
}

void print(){
    if(top == -1){
        cout << "Stack is empty" << endl;
        return;
    }
    for(int i = top; i >= 0; i--){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    print();

    return 0;
}