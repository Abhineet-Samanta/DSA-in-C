#include<stdio.h>
void displayarray(int * array,int * size){
    printf("\n");
 for (int i = 0; i < *size; i++)
    {
        printf("%d ,", array[i]);
    }
}void InsertionSort(int * array, int *size){
    for (int i = 1; i < *size; i++)
    {  int key= array[i];
        int j=i-1;
        while(j>=0 && array[j]>key){
            array[j+1]=array[j];
            j--;
        }array[j+1]=key;
    }
    
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
      InsertionSort(array,&size);
      displayarray(array, &size);

    return 0;
}