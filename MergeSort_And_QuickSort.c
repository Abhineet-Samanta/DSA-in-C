#include<stdio.h>
void swap(int * array, int i, int j){
    int temp= array[i];
    array[i]= array[j];
    array[j]=temp;
}int partition(int low , int high, int * array){
    int pivot=array[low];
    int i= low +1;
    int j=high;
    while (1)
    { while(array[i]<=pivot){
        i++;
    }while(array[j]>pivot){
        j--;
    }if(i>=j){
        break;
    }swap(array, i,j);}
    swap(array,low, j);
    return j;
}void QuickSort(int*array,int low, int high ){
   if(low<high){
    int pivotidx=partition(low, high, array);
    QuickSort(array,low,pivotidx-1);
    QuickSort(array,pivotidx+1,high);
   }
}void merge(int * array, int low,int mid , int high){
    int i= low; int j= mid+1;int k=0; 
    int size=high-low+1;
    int array1[size];
    while(i<=mid && j<= high){
        if(array[i]<array[j]){
            array1[k]=array[i];
            k++; i++;
        }else{
            array1[k]=array[j];
            k++;j++;
        }
    }while(i<=mid){
        array1[k]=array[i];
        k++;i++;
    }while(j<=high){
        array1[k]=array[j];
        k++;j++;
    }for (int x = 0; x < size; x++)
    {
        array[low+x]=array1[x];
    }
    
}void mergesort(int * array, int low , int high){
    if(low<high){
        int mid=(low+high)/2;
        mergesort(array,low, mid);
        mergesort(array,mid+1,high);
        merge(array,low,mid,high);
    }
}
int main(){
   int array[10]={2,1,3,7,8,0,16,8,9,88};
   mergesort(array,0,9);
   for (int i = 0; i < 10; i++)
   {
     printf("%d  ", array[i]);
   }
   int array2[10]={2,1,3,7,8,0,16,8,9,88};
   QuickSort(array2,0,9);
   printf("\n");
    for (int i = 0; i < 10; i++)
   {
     printf("%d  ", array2[i]);
   }
   
}