#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
    int top;
    int *array;
    int size;
}stack;
int isFull(stack *s){
    if(s->top==s->size-1){
        return 1;
    }return 0;
}int isEmpty(stack *s){
    if(s->top==-1){
        return 1;
    }return 0;
}void push(stack *s, int value){
    if(isFull(s)==1){
        printf("Stack Overflow");
        return;
    }else{
        s->top++;
        s->array[s->top]=value;
    }
}int pop(stack *s){
    if(isEmpty(s)==1){
        printf("Stack Underflow");
        return -1;
    }else{
       int value= s->array [s->top];
       s->top--;
       return value;
    }
}int peek(stack *s){
    if(isEmpty(s)==1){
        printf("Empty Stack Error");
        return -1;
    }else{
        return s->array[s->top];
    }
}int peek_at_any_index(stack *s, int i){
    int index=s->top-i+1;
    if(index<0){
        printf("INVALID INDEX");
        return -1;
    }else{
        return s->array[index];
    }
}void print(stack *s){
    printf("\n");
    for (int i = 1; i <= s->top+1; i++)
    {
        printf("%d  ",peek_at_any_index(s,i));
    }
    printf("\n");
}int StackBottom(stack *s){
    if(isEmpty(s)==1){
        printf("Empty Stack Error");
        return -1;
    }else{
        return s->array[0];
    }
}
int main(){
    stack* s=(stack *)malloc(sizeof(stack));
    s->top=-1;
    s->size=10;
    s->array=(int*)malloc(s->size*sizeof(int));
    push(s,8);
    push(s,16);
    push(s,4);
    push(s,1);
    push(s,6);
    print(s);
    pop(s);
    print(s);
    printf ("%d\n",pop(s));
    printf("%d\n",peek(s) );
    printf("%d\n",peek_at_any_index(s,2));
return 0;
}