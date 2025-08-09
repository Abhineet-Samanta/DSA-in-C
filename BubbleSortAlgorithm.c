#include<stdio.h>
void swap(int i, int j, int * array){
    int temp=array[i];
    array[i]=array[j];
    array[j]=temp;
}
void displayarray(int * array,int * size){
    printf("\n");
 for (int i = 0; i < *size; i++)
    {
        printf("%d ,", array[i]);
    }
}void BubbleSort(int *array, int *size){
    for (int i = 0; i < *size; i++)
    { for (int j= 0; j < *size-i-1; j++)
    {  if(array[j]>array[j+1]){
        swap(j,j+1,array);
    }}}
}
int main(){
      int size;
      printf("Size of array:-");
      scanf("%d", &size);
      int array[size];
      printf("Elements of array:-");
      for (int i = 0; i < size; i++)
      {scanf("%d", &array[i]);}
    displayarray(array, &size);
    BubbleSort(array, &size);
    displayarray(array, &size);}