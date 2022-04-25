// Height of Binary Tree

#include<iostream>
using namespace std;

int height(struct node *root){
    if(root == NULL){
        return 0;
    }

    int lheight = height(root->left);
    int rheight = height(root->right);

    if(lheight > rheight){
        return lheight + 1;
    }
    else{
        return rheight + 1;
    }
}

int main() {
    

    return 0;
}