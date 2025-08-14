#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
    int data;
    struct  Node * left;
    struct Node * right;
}Node;
Node * createNode(int data){
 Node * n=(Node *)malloc(sizeof(Node));
 n->data=data;
 n->right=NULL;
 n->left=NULL;
 return n;
}void preorder(Node * root){
    if(root!=NULL){
    printf("%d--->",root->data);
    preorder(root->left);
    preorder(root->right);}

}
int main(){
    Node * root;
    root=createNode(4);
    Node * node1;
    node1=createNode(1);
    Node * node2;
    node2=createNode(5);
    Node * node3;
    node3=createNode(2);
    Node * node4;
    node4=createNode(6);
    root->left=node1;
    root->right=node4;
    node1->left=node2;
    node1->right=node3;
    preorder(root);
    return 0;
}