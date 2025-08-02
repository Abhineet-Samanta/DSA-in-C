#include<stdio.h>
#include<stdlib.h>
typedef struct My_custom{
int total_size;
int used_size;
int *ptr;
}Array;
void create_array(Array *a, int usize, int tsize){
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr=(int *)malloc(tsize*sizeof(int ));
}void display_array(Array*a){
    for (int  i = 0; i < a->used_size; i++)
    {
       printf("%d   ",(a->ptr)[i]);
    }
    
}void setval(Array *a){
    printf("Enter elements:-");
    for (int i = 0; i < a->used_size; i++)
    {
       scanf("%d",&(a->ptr)[i]);
    }
}
int main(){
    Array Mycustom;
 create_array(&Mycustom,2,10);
 setval(&Mycustom);
 display_array(&Mycustom);
}