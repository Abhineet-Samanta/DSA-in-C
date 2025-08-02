#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
}Node;
Node * InsertAtBeginning(Node *head, int data){
    Node *ptr=(Node *)malloc(sizeof(Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}Node *InsertAtEnd(Node* head, int data){
    Node *ptr=(Node *)malloc(sizeof(Node));
    Node *p=head;
    ptr->data=data;
    if(p==NULL){
      return ptr;
    }ptr->next=NULL;
    while(p->next!=NULL){
        p=p->next;
    }p->next=ptr;
    return head;
}Node *InsertInBetween(Node *head, int data, int idx){
    Node *ptr=(Node *)malloc(sizeof(Node));
    int i=0;
    Node *p= head;
    while(i != idx-1){
        p=p->next;
        i++;
    }ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}void traversal(Node *head){
 Node *ptr= head;
 printf("\n");
 while(ptr!=NULL){
    printf("%d-->",ptr->data);
    ptr=ptr->next;
 }
}void Selection_Sort(Node *head){
    Node *ptr=head;
    while (ptr!=NULL)
    {Node *minidx= ptr;
    Node *j=ptr->next;
    while(j!=NULL){
        if(j->data<minidx->data){
            minidx=j;
        }j = j->next;
    }int temp=ptr->data;
    ptr->data=minidx->data;
    minidx->data=temp;
    ptr = ptr->next;
}}void Bubble_Sort(Node *head){
    Node* ptr=head;
    while (ptr!=NULL)
    { Node *j=head;
        while(j->next!=NULL){
            if(j->data>j->next->data){
                 int temp = j->data;
                j->data = j->next->data;
                j->next->data = temp;
            }j=j->next;
        }ptr=ptr->next;
        
    }
}Node *Delete_Index(Node *head, int idx){
    int i=0;
    Node *ptr=head;
    while(i!=idx-1){
        ptr=ptr->next;
        i++;
    }if (ptr->next != NULL){
    Node *q=ptr->next;
    ptr->next=q->next;
    free(q);}
    
    return head;
}Node *Delete_At_First(Node *head){
    Node *ptr= head;
    head=head->next;
    free(ptr);
    return head;
}Node *Delete_At_End(Node* head){
    Node *ptr=head;
    if (head == NULL) {return NULL;}
    if (head->next == NULL) {
         free(head);
        return NULL;}
    while (ptr->next->next!=NULL)
    {
        ptr=ptr->next; 
    }free(ptr->next);
    ptr->next=NULL;
    return head;
}Node *Delete_A_Node_Value(Node *head, int value){
    Node *prev=head;
    Node *curr=head->next;
    if(head->data==value){
        return Delete_At_First(prev);
    }
   while(curr!=NULL){
    if(curr->data==value){
        prev->next=curr->next;
        free(curr);
        return head;
    }prev = curr;
    curr = curr->next;
   }
   return head;
    
}
int main(){
    Node *head=NULL;
   head= InsertAtBeginning(head, 8);
   head= InsertAtEnd(head,16);
   head=InsertInBetween(head,4,1);
   head=InsertInBetween(head,18,2 );
   traversal(head);
   Selection_Sort(head);
   traversal(head);
   head=InsertInBetween(head,88,3 );
   traversal(head);
   Bubble_Sort(head);
   traversal(head);
   head=Delete_Index(head,2);
   traversal(head);
   head=Delete_At_First(head);
   traversal(head);
   head=Delete_At_End(head);
   traversal(head);
   head=Delete_A_Node_Value(head, 18);
   traversal(head);
   head=Delete_A_Node_Value(head, 16);
   traversal(head);
}