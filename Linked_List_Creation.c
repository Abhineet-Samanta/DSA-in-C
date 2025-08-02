#include<stdio.h>
#include<stdlib.h>
typedef struct Node 
{
    int data;
    struct Node *next;
}Node;
void LinkedListTraversal(Node *ptr){
    while(ptr!=NULL){
        printf("%d  ", ptr->data);
        ptr=ptr->next;
    }
} 


int main(){
    Node *head;
    Node *second;
    Node * third;
    //allocate memory for nodes for linked list in heap
    head=(Node *)malloc(sizeof(Node));
    second =(Node *)malloc(sizeof(Node));
    third=(Node *)malloc(sizeof(Node));
    head->data=8;
    head->next=second;
    second->data=88;
    second->next=third;
    third->data=888;
    third->next=NULL;
    LinkedListTraversal(head);

return 0;
}