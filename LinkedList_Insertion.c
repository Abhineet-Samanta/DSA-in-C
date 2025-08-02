#include<stdio.h>
#include<stdlib.h>
typedef struct Node 
{
   int data;
   struct Node *next;
}Node;
void traversal(Node *ptr){
    printf("\n");
    while(ptr!=NULL){
        printf("%d -->",ptr->data);
        ptr=ptr->next;}
}
Node * insertatBeggining(Node *head, int data){
    Node *ptr=(Node *)malloc(sizeof(Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
} Node *insertinIndex(Node *head, int data, int index){
    Node *ptr= (Node *)malloc(sizeof(Node));
     Node *p=head;
     int i=0;
     while(i!=index-1){
        p=p->next;
        i++;
     }ptr->data=data;
     ptr->next=p->next;
     p->next=ptr;
     return head;}
 Node  *insertatEnd(Node * head, int data){
    Node *ptr=(Node *)malloc (sizeof(Node));
    Node *p=head;
    ptr->data=data;
    ptr->next=NULL;
    while (p->next != NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    return head;
 }
 Node *insertAfterNode(Node *head, int NodeIndex, int value){
    int i=0;
    Node *ptr=(Node*)malloc(sizeof(Node));
    Node *p=head;
    if (p == NULL) {
        printf("Invalid index: %d\n", NodeIndex);
        return head;
    }
    while(i<NodeIndex && p!=NULL){
     p=p->next;
     i++;
    }ptr->data = value;
    ptr->next = p->next;
    p->next = ptr;
    return head;
 }
int main(){
    Node *head = NULL;
    head=insertatBeggining(head, 8);
    traversal(head);
    head=insertatBeggining(head,88);
    traversal(head);
    head=insertatBeggining(head, 888);
    traversal(head);
    head=insertinIndex(head,8888,2);
    traversal(head);
    head=insertatEnd(head,16);
    traversal(head);
    head = insertAfterNode(head, 2, 7777);
    traversal(head);
    return 0;
}