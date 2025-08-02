#include<stdio.h>
#include<stdlib.h>
typedef struct myArray{
    int total_size;
    int used_size;
    int *ptr;
}Array;
void create(Array *a,int tsize,int usize){
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr=(int *) malloc(tsize *sizeof(int));
}void display(Array *a){
    printf("\n");
    for (int i = 0; i < a->used_size; i++)
    {
        printf(" %d ",(a->ptr)[i]);
    }
}void set(Array *a){
    printf("Enter elements:-");
    for (int i = 0; i < a->used_size; i++)
    {
        scanf("%d", &(a->ptr)[i]);
    }
    
}int get(Array *a){
    int x;
printf("\nEnter the index number to get element:-");
scanf("%d", &x);
     return a->ptr[x]; 
}int size(Array *a){
   return a->used_size;
}void display_size(Array *a){
    int u=size(a);
  printf("\nsize of Array:-%d\n",u);
}void insertion(Array *a, int index, int value){
    if(index>=a->total_size){
        printf("Not enough space to insert");
        return;
    }else if(index>a->used_size || index<0){
        printf("Wrong index to insert");
        return;
    }else{
        for (int i = a->used_size; i>index; i--)
        {
            a->ptr[i]=a->ptr[i-1];
        }a->ptr[index]=value;
        a->used_size+=1;
    }
}void deletion (Array *a, int index){
     if(index < 0 || index >= a->used_size){
        printf("\nInvalid index for deletion.\n");
        return;
    }else{
    for (int  i = index; i < a->used_size ; i++)
    {
       a->ptr[i]=a->ptr[i+1];
    }a->used_size=a->used_size-1;}
    
}void sorting_Ascending(Array *a){
    for (int  i = 0; i < a->used_size; i++)
    {
        for (int j = 0; j < a->used_size-i-1; j++)
        {
            if(a->ptr[j]>=a->ptr[j+1]){
                int temp=a->ptr[j];
                a->ptr[j]=a->ptr[j+1];
                a->ptr[j+1]=temp;
            }
        }
        
    }
    
}int min(Array *a){
    int min=a->ptr[0];
    for (int  i = 0; i < a->used_size; i++)
    {
        if(min>a->ptr[i]){
            min=a->ptr[i];
        }
    }return min;}
void selection_sort(Array *a){
    for (int i = 0; i < a->used_size - 1; i++)
    { int minidx=i;
    for(int j=i+1;j<a->used_size;j++){
        if(a->ptr[minidx]>a->ptr[j]){
            minidx=j;}

    }if(minidx!=i){
        int temp = a->ptr[i];
            a->ptr[i] = a->ptr[minidx];
            a->ptr[minidx] = temp;}
        
    }
    
    

}void Linear_Search(Array *a, int value){
    int flag=0;
    int idx=-1;
    for (int i = 0; i < a->used_size; i++)
    {
       if(a->ptr[i]==value){
        flag+=1;
        idx=i;}
    }if(flag==1){
        printf("\nElement found at :- %d\n",idx);
    }else if(flag==0){
        printf("\nElement not found\n");
        return;}
}void Binary_Search_and_sorting(Array *a, int value){
    selection_sort(a);
    int si=0; int ei=a->used_size-1;
    int flag=0;int idx=-1;
    while (si<=ei)
    {int mid=(si+ei)/2;
        if(a->ptr[mid]==value){
            flag+=1;
            idx=mid;
            break;
        }else if(a->ptr[mid]>value){
            ei=mid-1;
        }else if (a->ptr[mid]<value){
            si=mid+1;
        }
       
    }
    
    if(flag==1){
        printf("\nElement found at :- %d\n",idx);
    }else if(flag==0){
        printf("\nElement not found\n");
        return;}
}
int  main(){
    Array arr;
    create(&arr,10,5);
    set(&arr);
    display(&arr);
    display_size(&arr);
    insertion(&arr,3,4);
    display(&arr);
    display_size(&arr);
    deletion(&arr,3);
    display(&arr);
    sorting_Ascending(&arr);
    selection_sort(&arr);
    display(&arr);
    Linear_Search(&arr,4);
    Binary_Search_and_sorting(&arr,4);
    
  
    
return 0;}