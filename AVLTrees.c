#include <stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct  Node * left;
    struct  Node * right;
    int height;
}Node ;
int max(int a , int b){
    return a>b?a:b;
}
int  getHeight(Node * n){
    if(n==NULL){
        return 0;
    }return n->height;
}Node * createNode(int value){
    Node * n= (Node *)malloc(sizeof(Node));
    n->data=value;
    n->height=1;
    n->left=NULL;
    n->right=NULL;
    return n;
}int getBalanceFactor(Node * n){
    if(n==NULL){
        return 0;
    }return getHeight(n->left) -getHeight(n->right);
}
Node * rightRotate(Node * y){
   Node * x=y->left;
   Node *T2=x->right;
   x->right=y;
   y->left=T2;
   y->height=max(getHeight(y->right),getHeight(y->left))+1;
   x->height=max(getHeight(x->right),getHeight(x->left))+1;
   return x;
}Node * leftRotate(Node * x){
    Node * y=x->right;
   Node *T2=y->left;
   
   y->left=x;
   x->right=T2;
   y->height=max(getHeight(y->right),getHeight(y->left))+1;
   x->height=max(getHeight(x->right),getHeight(x->left))+1;
   return x;

}Node * insert(Node * n, int value){
    if(n==NULL){
        return createNode(value);
    }if(value<n->data){
        n->left=insert(n->left,value);
    }else if(value >n->data){
        n->right=insert(n->right,value);
    }return n;
    n->height=max(getHeight(n->right),getHeight(n->left))+1;
    int bf=getBalanceFactor(n);
    //Left Left case
    if(bf>1 && value<n->left->data){
       return  rightRotate(n);
    }
    //Right Right case
    if(bf<-1 && value>n->left->data){
        return leftRotate(n);
    }
    //Right Left case
    if(bf>1 && value>n->left->data){
        n->left=leftRotate(n->left);
       return rightRotate(n);
    }
    //Left Right case
    if(bf<-1 && value<n->left->data){
        n->right=rightRotate(n->right);
        return leftRotate(n);
    }
  return n;

}void inorder(Node * n){
    if(n!=NULL){
        inorder(n->left);
        printf("%d --->",n->data);
        inorder(n->right);
    }
}
int main(){
    Node * root=NULL;
    root=insert(root,45);
    root=insert(root,4);
    root= insert(root,5);
    root= insert(root,8);
    root=insert(root,9);
    inorder(root);
    return 0;
}