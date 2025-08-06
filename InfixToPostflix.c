#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct stack{
    int top;
    int tsize;
    char *array;
}stack;
int isFull(stack *s){
   if(s->top==s->tsize-1){
    return 1;
   }else{
    return 0;}
}int isEmpty(stack *s){
    if(s->top==-1){
        return 1;
    }else{return 0;}
}void push(stack *s, char value){
 if(isFull(s)){
    printf("Stack is Full");
    return;
 }else{
    s->top++;
    s->array[s->top]=value;
 }
}char Top_pop(stack *s){
    if(isEmpty(s)){
        return '\0';
    }else{
        char value=s->array[s->top];
        s->top--;
        return value;
    }
}char peek(stack *s){
    if(isEmpty(s)){
        return '\0';
    }else{
    char value=s->array [s->top];
    return value;}
}int precedence(char ch){
   if(ch=='+'||ch=='-'){
        return 1;
   }else if(ch=='/'||ch=='*'){
    return 2;
   }else{
    return 0;
   }
}int operator(char ch){
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
        return 1;
    }else{
        return 0;
    }
}


char *InfixToPostfix(char *infix){
    stack *s=(stack*)malloc(sizeof(stack));
    s->top=-1;
    s->tsize=100;
    s->array=(char *)malloc(s->tsize*sizeof(char));
    char *postfix=(char *)malloc((strlen(infix)+1)*sizeof(char));
    int i=0; int j=0;
    while(infix[i] != '\0'){
        if(!operator(infix[i])){
            postfix[j]=infix[i];
            i++;
            j++;
        }else{
            char c=peek(s);
            if(precedence(infix[i])>precedence(c)){
                push(s,infix[i]);
                i++;
            }else{
                
                postfix[j]=Top_pop(s);
                j++;
            }
        }
    }while(!isEmpty(s)){
                postfix[j]=Top_pop(s);
                j++;
            }postfix[j]='\0';
            return postfix;
}
int main(){
    char * infix="a-b+c*d/e";
    printf("Postfix is %s", InfixToPostfix(infix));
    return 0;
    
    
}