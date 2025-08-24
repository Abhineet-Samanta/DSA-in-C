#include<stdio.h>
#include<stdlib.h>
typedef struct Queue{
    int size;
    int front;
    int rear;
    int * array;
}queue;
int isFull(queue * q){
    if(q->rear==q->size-1){
        return 1;
    }return 0;
}int  isEmpty(queue * q){
    if(q->rear==q->front){
        return 1;
    }return 0;
}void enqueue(queue * q,int value){
    if(isFull(q)==1){
        printf("Queue is full");
        return ;
    }else{
    q->rear=q->rear+1;
    q->array[q->rear]=value;
    }
}int dequeue(queue * q){
    if(isEmpty(q)==1){
        printf("Queue is Empty");
        return -1;
    }q->front++;
    int a=q->array[q->front];
     return a;
}void traversal(queue * q){
    printf("\n");
    for (int i = q->front+1; i <= q->rear; i++)
    {
       printf("%d   ",q->array[i]);
    }
         
}
int main(){
    queue* q=(queue*)malloc(sizeof(queue));
    q->front=-1;
    q->rear=-1;
    q->size=400;
    q->array=(int *) malloc (q->size*sizeof(int));
    //bfs implementation
    int start = 0;
    int i=0;
    int visited[7]={0,0,0,0,0,0,0};
    enqueue(q,start);
    int a[7][7]={ 
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0}};
        printf("%d",i);
        visited[i]=1;
        while(isEmpty(q)==0){
            int node =dequeue(q);
            for (int j = 0; j < 7; j++)
            { if(a[node][j]==1 && visited[j]==0){
                printf("   %d  ",j);
                visited[j]=1;
                enqueue(q,j); 
            }
                
            }
            
        }

    return 0;
}