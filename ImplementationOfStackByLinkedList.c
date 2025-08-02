#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
  int data;
  struct Node * next;
}Node;
Node * push(Node * top, int value){
  Node* ptr= (Node *)malloc(sizeof(Node));
  if(ptr==NULL){
    printf("Memory Allocation Failed");
    return top;
  }else{
    ptr->data=value;
    ptr->next=top;
    return ptr;
  }
}Node *pop(Node *top){
    printf("\n");
    Node *ptr= top;
    if(ptr==NULL){
        printf("Stack Underflow");
        return top;
    }int value= ptr->data;
    top=ptr->next;
    printf("pop:-%d",value);
    free(ptr);
    return top;
}Node *peek(Node *top){
    printf("\n");
    Node *ptr= top;
    if(ptr==NULL){
        printf("Stack Underflow");
        return top;
    }int value=ptr->data;
    printf("peek:-%d", value);
    return top;
}Node *peek_at_any_index(Node *top, int index){
    printf("\n");
    Node *ptr= top;
    int i=1;
   if(ptr==NULL){
        printf("Stack Underflow");
        return top;
    }
    while(i<index && ptr!=NULL){
       ptr=ptr->next;
       i++;
    }if(ptr !=NULL){
        int value=ptr->data;
        printf("Peek at %d index=%d",i,value);
    }else{
        printf("Stack dosen't have these many elements ");
    }return top;
}void printStack(Node *top){
    Node *ptr=top;
    printf("\n");
    while (ptr!=NULL)
    {printf("%d  ",ptr->data);
    ptr=ptr->next;}  
}void isEmpty(Node *top){
    printf("\n");
    Node *ptr= top;
    if(ptr==NULL){
        printf("Stack is Empty");
        return;
    }else{
        printf("Stack has elements in it");
        return;
    }
}
int main(){
    Node *top=NULL;
    top=push(top, 16);
    top=push(top,88);
    top=push(top,8);
    peek(top);
    top=pop(top);
    peek_at_any_index(top,1);
    top=pop(top);
    printStack(top);
    isEmpty(top);
    return 0;
}