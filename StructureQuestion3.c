#include<stdio.h>
#include<string.h>
typedef struct cricketer
{
   char name[100];
   int age;
   int  Number_of_Test_Matches;
   int  Average_Runs_in_each_Test_Match[1000];
}cricket;

int main(){
   cricket array[20];
   int i=0;int button;
   
   while(1){
     printf("\nEnter 1 to add , 2 to display , any number to exit midway:-\n");
     scanf("%d",&button);
     getchar();
     if(button==1){
        if(i<20){
          printf("Enter cricketer name:-");
          char s[100];
          gets(s);
          strcpy(array[i].name,s);
          printf("age of cricketer:-");
          scanf("%d",&array[i].age);
          getchar();
          printf("number test matches of cricketer:-");
          scanf("%d",&array[i].Number_of_Test_Matches);
          getchar();
          printf("Average number of runs in each test match of cricketer:-");
          for (int  j = 0; j < array[i].Number_of_Test_Matches; j++)
          {
            scanf("%d",&array[i].Average_Runs_in_each_Test_Match[j]);
          }i++;
        }else if(i>=20){
            printf("20 names at max allowed ");
          }}
    else if(button==2){
        printf("\n%-20s %-10s %-15s %-30s\n", "Name", "Age", "Test Matches", "Runs in Each Match");
for (int k = 0; k < i; k++) {
    printf("%-20s %-10d %-15d ", array[k].name, array[k].age, array[k].Number_of_Test_Matches);
    for (int j = 0; j < array[k].Number_of_Test_Matches; j++) {
        printf("%d ", array[k].Average_Runs_in_each_Test_Match[j]);
    }
    printf("\n");
            }
        }else{
            break;
        }

   }
    return 0;
}