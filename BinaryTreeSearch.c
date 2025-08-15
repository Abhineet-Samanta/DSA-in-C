#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
    int data;
    struct Node * left;
    struct Node * right;
}Node;
Node * createNode(int data){
    Node * n= (Node *)malloc(sizeof(Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}Node * addLeft(Node*parent,int value){
    if(parent==NULL){
        printf("Parent is NULL");
        return NULL;
    }
        Node *ptr=createNode(value);
        parent->left=ptr;
    return ptr;
}Node * addRight(Node * parent, int value){
    if(parent==NULL){
        printf("Parent is NULL");
        return NULL;
    }Node * ptr=createNode(value);
    parent->right=ptr;
    return ptr;
}int isBST(Node * root){
   static Node * ptr=NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }if(ptr!=NULL && ptr->data>=root->data){
            return 0;
        }ptr=root;
        return isBST(root->right);
    }else{
        return 1;
    }
}int Search(int key,Node * root){
    if(root==NULL){
        
        return 0;
    }
        if(root->data==key){
            return 1;
        }else if(root->data>key){
            return Search(key,root->left);
        }else{
            return Search(key,root->right);
        }
    
}int SearchIter(int key,Node * root){
    if(root==NULL){
        return 0;
    } while (root!=NULL)
    {
        if(root->data==key){
            return 1;
        }else if(root->data>key){
            root=root->left;
        }else{
            root=root->right;
        }
    }
    return 0;
}
int main(){
    Node * root=createNode(50);
    Node *n1=addLeft(root,40);
    Node *n2=addRight(root,60);
    addLeft(n1,20);
    addRight(n1,45);
    addLeft(n2,55);
    addRight(n2,70);
    printf("%d\n",Search(55,root));
    printf("%d\n",Search(90,root));
    printf("%d\n",SearchIter(90,root));
    printf("%d\n",SearchIter(55,root));
    return 0;
}