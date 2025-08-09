#include<stdio.h>
void displayarray(int * array,int * size){
    printf("\n");
 for (int i = 0; i < *size; i++)
    {
        printf("%d ,", array[i]);
    }
}void SelectionSort(int * array, int * size ){
    for (int i = 0; i < *size; i++)
    { int minidx=i;
        for (int j = i+1; j < *size; j++)
        { if(array[j]<array[minidx]){
           minidx=j;
        }
        }if(minidx!=i){
            int temp= array[i];
            array[i]=array[minidx];
            array[minidx]=temp;
        }
        
        
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
      SelectionSort(array,&size);
      displayarray(array, &size);

    return 0;

}