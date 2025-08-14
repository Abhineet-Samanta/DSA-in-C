#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
 int data;
 struct Node * left;
 struct Node * right;
}Node;
Node * createNode(int data){
    Node * n=(Node *)malloc(sizeof(Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}void inorder(Node * root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d--->",root->data);
        inorder(root->right);
    }
}
int main(){
    Node* root=createNode(4);
    Node * rootl=createNode(1);
    Node * rootr=createNode(6);
    Node * rootll=createNode(5);
    Node * rootlr=createNode(2);
    root->left=rootl;
    root->right=rootr;
    rootl->left=rootll;
    rootl->right=rootlr;
    inorder(root);
    return 0;
}