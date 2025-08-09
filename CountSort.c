#include<stdio.h>
int max(int * array, int  size){
    int max=array[0];
    for (int i = 0; i < size; i++)
    {if(max<array[i]){
            max= array[i];
        }}
    return max;
}void countSort(int * array, int size){
    int s=max(array, size)+1;
    int count[s];
    for (int i = 0; i < s; i++) {
    count[i] = 0;}
     for (int i = 0; i < size; i++)
     {
        count[array[i]]++;
     }
     
    
    int index = 0;
    for (int i = 0; i < s; i++) {
    while (count[i] > 0) {
        array[index++] = i;
        count[i]--;
    }}
    
    

}
int main(){
    int array[10]={2,1,3,7,8,0,16,8,9,88};
     countSort(array,10);
     for (int i = 0; i < 10; i++)
     {
        printf("%d  ",array[i]);
     }
     
    return 0;
}