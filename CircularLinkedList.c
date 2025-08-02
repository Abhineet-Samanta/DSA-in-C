#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node * next;
}Node;
void CircularLinkedListTraversal(Node *head){
    Node *ptr=head;
    do
    {
        printf("%d-->",ptr->data);
        ptr=ptr->next;
    } while (ptr !=head);
    printf("\n");
}Node * CircularLinkedListInsertionAtFirst(Node *head,int value){
  Node *ptr=(Node *)malloc(sizeof(Node));
  ptr->data=value;
  Node *p=head;
  while (p->next!=head)
  {
    p=p->next;
  }p->next=ptr;
  ptr->next=head;
  head=ptr;
  return head;
  
}int main(){
    Node *head=(Node *)malloc(sizeof(Node));
    Node *second=(Node *)malloc(sizeof(Node));
    Node *third=(Node *)malloc(sizeof(Node));
    Node *fourth=(Node *)malloc(sizeof(Node));
    head->data=16;
    head->next=second;
    second->data=8;
    second->next=third;
    third->data=6;
    third->next=fourth;
    fourth->data=4;
    fourth->next=head;
    CircularLinkedListTraversal(head);
    head=CircularLinkedListInsertionAtFirst(head, 88);
    CircularLinkedListTraversal(head);
    return 0;
}