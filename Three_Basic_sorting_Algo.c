#include<stdio.h>
#include<stdlib.h>
typedef struct Array{
    int tsize;
    int usize;
    int *ptr;
}Array;
void create(Array *a, int u, int t){
    a->tsize=t;
    a->usize=u;
    a->ptr=(int *)malloc(t*sizeof(int));
}void set(Array *a){
    printf("Enter Elements:-");
    for (int  i = 0; i < a->usize; i++)
    {
        scanf("%d", &(a->ptr)[i]);
    }
}void display(Array *a){
    printf("\n");
    for (int i = 0; i < a->usize; i++)
    {
        printf("%d  ",(a->ptr)[i]);
    }
}void createArray(Array *a){
    int x; int y;
    printf("Enter the size of Array:-");
    scanf("%d",&x);
    y=x*x;
    create(a,x,y);
   set(a);
  display(a);}
 void deleteidx(Array *a, int idx){
    if(idx>=a->usize){
        printf("wrong deletion error");
        return;
    }else{
        for (int  i = idx; i < a->usize; i++)
        {
           a->ptr[i]=a->ptr[i+1];
        }a->usize--;
    }
 }void insert(Array *a, int idx, int value){
    if(idx>a->usize|| a->usize == a->tsize){
        printf("wrong insertion error");
        return;
    }else{
        for (int  i = a->usize; i > idx; i--)
        {
           a->ptr[i]=a->ptr[i-1];
        }a->ptr[idx]=value;
        a->usize++;
    }
 }void BubbleSort(Array *a){
    for (int  i = 0; i < a->usize; i++)
    {for (int j = 0; j < a->usize-i-1; j++)
    { if(a->ptr[j]>a->ptr[j+1]){
        int temp= a->ptr[j];
        a->ptr[j]=a->ptr[j+1];
        a->ptr[j+1]=temp;
    }}}
 }void SelectionSort(Array * a){
    int minidx;
    for (int i = 0; i < a->usize-1; i++)
    {minidx=i;
        for (int j = i+1; j < a->usize; j++)
        {if(a->ptr[j]<a->ptr[minidx]){
            minidx=j;
        }
}if (minidx!= i)
{
    int temp = a->ptr[minidx];
    a->ptr[minidx] = a->ptr[i];
    a->ptr[i] = temp;
}}
}void insertion_sort(Array *a){
  
    for (int  i = 1; i < a->usize; i++)
    {     int key=a->ptr[i];
        int j=i-1;
        while(j>=0 && a->ptr[j]>key){
             a->ptr[j + 1] = a->ptr[j];
             j--;
        }a->ptr[j+1]=key;
        
    }
    
}
  int main(){
    Array arr;
   createArray(&arr);
   deleteidx(&arr,2);
   display(&arr);
   insert(&arr,3,4);
   display(&arr);
   //BubbleSort(&arr);
   //SelectionSort(&arr);
   insertion_sort(&arr);
   display(&arr);
}