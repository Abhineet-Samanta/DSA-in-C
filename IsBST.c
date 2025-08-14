#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
    int data;
    struct Node * left;
    struct  Node * right;
}Node;
Node * create(int data){
    Node * n=(Node *) malloc(sizeof(Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
}int isBST(Node * root){
    Node * prev=NULL;
    if(root!=NULL){
    if(!isBST(root->left)){
        return 0;
    }if(prev!=NULL && prev->data>=root->data){
        return 0;
    }prev=root;
    return isBST(root->right);
}
    else{
        return 1;
    }
}
int main(){
    Node * root =create(5);
    Node * rootr=create(6);
    Node * rootl=create(3);
    Node * rootlr=create(4);
    Node * rootll=create(1);
    root->left=rootl;
    root->right=rootr;
    rootl->left=rootll;
    rootl->right=rootlr;
    printf("%d",isBST(root));
    return 0;
}