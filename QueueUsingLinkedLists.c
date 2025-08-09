#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
    int data;
    struct  Node * next;
   
}Node;
Node * front=NULL;
Node * rear=NULL;
void enqueue(int value){
    Node *ptr=(Node *)malloc(sizeof(Node));
    if(ptr==NULL){
        printf("Memory not allocted");
        return;
    }else{
    ptr->data= value;
    ptr->next=NULL;
    if(front==NULL){
        front=ptr;
        rear=ptr;
    }else{
        rear->next=ptr;
        rear=ptr;
    }
    }
}int dequeue(){
int value= -1;
Node*ptr=front;
if(front==NULL){
    printf("The Queue is Empty \n");
}else{
    front=front->next;
    value=ptr->data;
    free(ptr);
}return value;
}void traversal(){
    printf("\n");
    Node *ptr=front;
    while(ptr!=NULL){
        printf("%d ,", ptr->data);
        ptr=ptr->next;
    }
}
int main(){
   enqueue(10);
   enqueue(20);
   enqueue(30);
   traversal();
   dequeue();
   traversal();
    return 0;}