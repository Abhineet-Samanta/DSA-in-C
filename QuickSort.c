#include<stdio.h>
void displayarray(int * array , int * size){
    printf("\n");
    for (int i = 0; i < *size; i++)
    {
        printf("%d ", array[i]);
    }
    
}void swap(int *array, int i , int j){
    int temp=array[i];
    array[i]= array[j];
    array[j]= temp;
}int partition(int low , int high, int * array){
    int j= high;
    int i= low+1;
    int pivot= array[low];
    while(1){
        while(array[i]<pivot){
            i++;
        }while(array[j]>pivot){
            j--;
        }if(i>=j){
            break;
        }swap(array, i, j);
    }
    swap(array,low, j);
    return j;
}void quicksort(int low , int high, int * array){
    if(low< high){
        int pivotindex= partition(low, high, array);
        quicksort(low, pivotindex-1, array);
        quicksort(pivotindex+1,high, array);
    }
}
int main(){
     int n;
     printf("Enter size of array:-");
     scanf("%d", &n);
     int array[n];
     printf("Enter elements of array:-");
     for (int i = 0; i < n; i++)
     {
        scanf("%d", &array[i]);
     }
     displayarray(array, &n);
     quicksort(0,n-1,array);
     displayarray(array, &n);
     
    return 0;
}