#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct Node* top = NULL;

void push(int x){
    Node* newNode = new Node();      // this will also work
    // struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));    // this will also work 
    newNode->data = x;
    newNode->next = top;
    top = newNode;
}

void pop(){
    if(top == NULL){
        cout << "Stack is empty" << endl;
        return;
    }
    Node* temp = top;
    top = top->next;
    delete temp;
}

void print(){
    if(top == NULL){
        cout << "Stack is empty" << endl;
        return;
    }
    Node* temp = top;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
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