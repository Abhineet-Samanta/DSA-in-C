#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
    int size;
    int top;
    int *arr;
}Stack;
int isFull(Stack *s){
    if(s->top==s->size-1){
        return 1;
    }return 0;
}int isEmpty(Stack *s){
    if(s->top==-1){
        return 1;
    }return 0;
}void push(Stack *ptr, int value){
    if(isFull(ptr)){
        printf("Stack Overflow Error");
        return;
    }else {
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}int pop(Stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow");
        return -1;
    }else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int main(){
    Stack *s=(Stack *)malloc(sizeof(Stack));
    s->size=100;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));
    printf("FULL:-%d\n",isFull(s));
    printf("EMPTY:-%d\n",isEmpty(s));
    push(s,8);
    push(s,88);
    push(s, 16);
    printf("FULL:-%d\n",isFull(s));
    printf("EMPTY:-%d\n",isEmpty(s));
    printf("pop:-%d\n",pop(s));
    
}