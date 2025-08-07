#include <stdio.h>
#include<stdlib.h>
typedef struct Queue{
    int size;
    int front;
    int rear;
    int *array;
}Queue;
int isFull(Queue *q){
    if(q->rear==q->size-1){
        return 1;
    }return 0;
}int isEmpty(Queue *q){
    if(q->front==q->rear){
        return 1;
    }return 0;
}void enqueue(Queue *q, int value){
    if(isFull(q)==1){
        printf("Queue Overflow Error\n");
        return;
    }else{
        q->rear++;
        q->array[q->rear]=value;
    }
}int Dequeue(Queue *q){
    if(isEmpty(q)==1){
        printf("Queue Underflow Error\n");
        return -1;
    }else{
       q->front++;
       int value =q->array[q->front];
       return value;
    }
}void print(Queue *q){
    printf("\n");
    for (int i = q->front+1; i <=q->rear; i++)
    {
        printf("%d ,", q->array[i]);
    }
    
}
int main(){
    Queue *q=(Queue *)malloc(sizeof(Queue));
    q->front=-1;
    q->rear=-1;
    q->size=10;
    q->array=(int *)malloc(q->size *sizeof(int));
    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);
    enqueue(q,5);
    print(q);
    Dequeue(q);
    print(q);

    return 0;
}