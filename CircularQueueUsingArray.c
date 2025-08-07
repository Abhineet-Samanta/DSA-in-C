#include<stdio.h>
#include<stdlib.h>
typedef struct Queue{
    int front;
    int rear;
    int size;
    int * array;
}Circular_Queue;
int isFull(Circular_Queue *q){
    if((q->rear+1)%q->size==q->front){
        return 1;
    }return 0;
}int isEmpty(Circular_Queue *q){
    if(q->rear==q->front){
        return 1;
    }return 0;
}void enqueue(Circular_Queue *q, int value){
    if(isFull(q)==1){
        printf("Queue Overflow\n");
        return;
    }else{
        q->rear=(q->rear+1)% q->size;
        q->array[q->rear]=value;
    }
}int dequeue(Circular_Queue *q){
    int value=-1;
    if(isEmpty(q)==1){
        printf("Queue underflow\n");
    }else{
        q->front=(q->front+1)%q->size;
        value= q->array[q->front];
    }return value;
}void print(Circular_Queue *q){
    printf("\n");
    int i = (q->front + 1) % q->size;
    while (i != (q->rear + 1) % q->size) {
        printf("%d, ", q->array[i]);
        i = (i + 1) % q->size;
    }
}int main(){
Circular_Queue *q=(Circular_Queue*)malloc(sizeof(Circular_Queue));
q->size=10;
q->front=0;
q->rear=0;
q->array=(int*)malloc(q->size*sizeof(int));
enqueue(q,1);
enqueue(q,2);
enqueue(q,3);
enqueue(q,4);
enqueue(q,5);
print(q);
dequeue(q);
print(q);
    return 0;

}