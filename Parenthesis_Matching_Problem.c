#include<stdio.h>
#include<stdlib.h>
typedef struct Stack{
   int totalspace;
   int  top;
   char *array;
}stack;
typedef struct Array{
    int UsedSpace;
    int TotalSpace;
    char *ptr;
}Array;
void CreateArray(Array * a, int usize,int tsize){
  a->TotalSpace=tsize;
  a->UsedSpace=usize;
  a->ptr=(char *)malloc(usize*sizeof(char));
}void SetValues(Array * a){
    
    for (int i = 0; i < a->UsedSpace; i++)
    {
        scanf(" %c",&a->ptr[i]);
    }
    
}void displayValues(Array *a){
    printf("\n");
    for (int i = 0; i < a->UsedSpace; i++)
    {
        printf("%c  ",a->ptr[i]);
    }
}
int isEmpty(stack *s){
   if(s->top==-1){
    return 1;
   }else{return 0;}
}int isFull(stack *s){
    if(s->top==s->totalspace-1){
        return 1;
    }else {return 0;}
}void push(stack * s, char value){
    if(isFull(s)==1){
        printf("STACK OVERFLOW ERROR");
        return;
    }else{
        s->top++;
        s->array[s->top]=value;
    }
}int pop(stack *s){
    if(isEmpty(s)==1){
        printf("STACK UNDERFLOW ERROR");
        return 0;
    }else{
        char value=s->array [s->top];
        s->top--;
        return value;
    }
}int peek(stack *s){
    if(isEmpty(s)==1){
        printf("STACK UNDERFLOW ERROR");
        return 0;
    }else{
        int value=s->array [s->top];
        return value;
    }
}int isMatchingPair(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}
void isBalanced(stack *s, Array *a){
     for (int i = 0; i < a->UsedSpace; i++)
     { char ch = a->ptr[i];
        if(ch=='('||ch=='['||ch=='{'){
        push(s,ch);
      }else if(ch==')'||ch==']'||ch=='}'){
        if (isEmpty(s)) {
            printf("It is NOT Balanced (Extra closing bracket: %c)\n", ch);
            return;
            }
        char topChar = pop(s);
        if (!isMatchingPair(topChar, ch)) {
            printf("It is NOT Balanced (Mismatch: %c and %c)\n", topChar, ch);
            return;
        }
      }
     }if (isEmpty(s)) {
        printf("It is Balanced\n");
    } else {
        printf("It is NOT Balanced \n");
    }
     
     

}
int main(){
  stack *s = (stack *)malloc(sizeof(stack));
    s->totalspace = 100;
    s->top = -1;
    s->array = (char *)malloc(s->totalspace * sizeof(char));
    Array a;
    int n;
    printf("Enter number of characters: ");
    scanf("%d", &n);
    CreateArray(&a, n, n);
    SetValues(&a);
    displayValues(&a);
    isBalanced(s, &a);
  

}