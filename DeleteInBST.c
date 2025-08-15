#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{   int data;
   struct Node * right;
    struct Node * left;
}Node;

Node * create(int value){
   Node * n=(Node*)malloc(sizeof(Node));
   n->data=value;
   n->left=NULL;
   n->right=NULL;
   return n;
}Node * InorderPredecessor(Node * root){
    root=root->left;
    while (root->right!=NULL)
    {
        root=root->right;
    }return root;}
Node * delete(Node * root, int value){
    Node * ipre;
    if(root==NULL){
        return NULL;
    }if(root->left==NULL && root->right==NULL){
        free(root);
        return NULL;
    }if(value<root->data){
        root->left=delete(root->left,value);
    }else if(value>root->data){
        root->right=delete(root->right,value);
    }else{
      // Case: no children
    if (root->left == NULL && root->right == NULL) {
        free(root);
        return NULL;
    }
    // Case: has left child → use predecessor
    else if (root->left != NULL) {
        ipre = InorderPredecessor(root);
        root->data = ipre->data;
        root->left = delete(root->left, ipre->data);
    }
    // Case: no left child but has right child → use successor
    else {
        Node *isucc = root->right;
        while (isucc->left != NULL) {
            isucc = isucc->left;
        }
        root->data = isucc->data;
        root->right = delete(root->right, isucc->data);
    }
    }return root;
}void Inorder(Node * root){
    if(root!=NULL){
        Inorder(root->left);
        printf("%d-->", root->data);
        Inorder(root->right);
    }
}
int main(){
    Node * root=create(8);
    Node * rootl=create(3);
    Node * rootll=create(1);
    Node * rootlr=create(6);
    Node *rootlrl=create(4);
    Node * rootlrr=create(7);
    Node * rootr=create(10);
    Node * rootrr=create(14);
    Node * rootrrl=create(13);
    root->left=rootl;
    root->right=rootr;
    rootl->left=rootll;
    rootl->right=rootlr;
    rootlr->left=rootlrl;
    rootlr->right=rootlrr;
    rootr->right=rootrr;
    rootrr->left=rootrrl;
    Inorder(root);
    printf("\n");
    root=delete(root,8);
    Inorder(root);
    printf("\n");
    root=delete(root,13);
    Inorder(root);
    printf("\n");
    root =delete(root,1);
    Inorder(root);
    printf("\n");
    root=delete(root,10);
    Inorder(root);
    printf("\n");
    return 0;
}