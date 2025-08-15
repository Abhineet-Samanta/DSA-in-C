#include<stdio.h>
#include<stdlib.h>
 typedef struct Node{
    int data;
    struct Node *left;
    struct Node * right;
}Node;
Node * createNode(int data){
    Node * n=(Node*)malloc(sizeof(Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}void InsertNode(Node * root, int key){
    Node * prev=NULL;
    while(root !=NULL){
        prev=root;
        if(key==root->data){
            printf("Already in BST");
            return;
        }else if(root->data>key){
            root=root->left;
        }else{
            root=root->right;
        }
    }Node * new=createNode(key);
    if(key<prev->data){
        prev->left=new;
    }else{
        prev->right=new;
    }
}void Inorder(Node * root){
   
    if(root !=NULL){
        Inorder(root->left);
        printf("%d--->",root->data);
        Inorder(root->right);
    }
}
int main(){
    Node * root=createNode(8);
    Node * rootl=createNode(3);
    Node * rootll=createNode(1);
    Node * rootlr=createNode(6);
    Node *rootlrl=createNode(4);
    Node * rootlrr=createNode(7);
    Node * rootr=createNode(10);
    Node * rootrr=createNode(14);
    Node * rootrrl=createNode(13);
    root->left=rootl;
    root->right=rootr;
    rootl->left=rootll;
    rootl->right=rootlr;
    rootlr->left=rootlrl;
    rootlr->right=rootlrr;
    rootr->right=rootrr;
    rootrr->left=rootrrl;
    Inorder(root);
    InsertNode(root,9);
    printf("\n");
    Inorder(root);
     printf("\n");
    InsertNode(root,10);
    return 0;
}