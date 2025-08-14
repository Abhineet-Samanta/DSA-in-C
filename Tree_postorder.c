#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
    int data;
    struct Node * left;
    struct Node * right;
}Node;
Node * createNode (int data){
    Node * n=(Node *)malloc(sizeof(Node));
    n->data=data;
    n->right=NULL;
    n->left=NULL;
    return n;
}void PostOrder(Node * root){
    if(root !=NULL){
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d--->",root->data);
    }
}
int main(){ 
    Node * root=createNode(4);
    Node * rootl=createNode(1);
    Node * rootr=createNode(6);
    Node * rootll=createNode(5);
    Node * rootlr=createNode(2);
    root->left=rootl;
    root->right=rootr;
    rootl->left=rootll;
    rootl->right=rootlr;
    PostOrder(root);
    return 0;}