#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node * prev;
    struct Node * next;
}Node;
Node* InsertionAtStart(Node *head, int value){
    Node* ptr=(Node *)malloc(sizeof(Node));
    if(head==NULL){
        ptr->next=NULL;
        ptr->prev=NULL;
        ptr->data=value;
        return ptr;
    }else{
        ptr->next=head;
        ptr->prev=NULL;
        ptr->data=value;
        head->prev=ptr;
        return ptr;
    }
}void traversal(Node *head){
    Node *ptr=head;
    printf("\n");
    printf("NULL<-->");
    while(ptr!=NULL){
        printf("%d <-->", ptr->data);
        ptr=ptr->next;
    }printf("NULL");
}void reverseTraversal(Node *head){
    printf("\n");
    printf("NULL<-->");
    Node *ptr= head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }while(ptr!=NULL){
        printf("%d <-->", ptr->data);
        ptr=ptr->prev;
    }printf("NULL");
}
    void InsertionSort(Node *head) {
    if (head == NULL || head->next == NULL)
       {return;} 

    Node* i = head->next;

    while (i != NULL) {
        int key = i->data;
        Node* j = i->prev;

        while (j != NULL && j->data > key) {
            j->next->data = j->data;
            j = j->prev;
        }

        if (j == NULL)
            head->data = key;
        else
            j->next->data = key;

        i = i->next;
    }
}



int main(){
    Node *head=NULL;
    head=InsertionAtStart(head, 88);
    head=InsertionAtStart(head, 8);
    head=InsertionAtStart(head, 16);
    traversal(head);
    reverseTraversal(head);
    InsertionSort(head);
    traversal(head);
    return 0;
}