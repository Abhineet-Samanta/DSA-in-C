# include<stdio.h>
#include<string.h>
typedef struct pokemon{
    char name[100];
    int HealthPower;
    int Attack;
    int Speed;
    char tier;
} pokemon;
int main(){
    pokemon array[1025];
    int n=0;
    int button;
    while (1){
        printf("enter 1 to add a pokemon 2 to exit:-");
        scanf("%d",&button);
        getchar();
        if(button==1){
        char x[100];
        printf("Enter pokemon name:-");
        gets(x);
        strcpy(array[n].name,x);
        printf("Enter pokemon attack:-");
        scanf("%d",&array[n].Attack);
        getchar();
        printf("Enter pokemon health:-");
        scanf("%d",&array[n].HealthPower);
        getchar();
        printf("Enter pokemon speed:-");
        scanf("%d",&array[n].Speed);
        getchar();
        printf("Enter pokemon tier (O,A,G,B,F(desending order)):-");
        scanf("%c",&array[n].tier);
        getchar();
        n++;}
        else if(button==2){
            break;
        }else{
            printf("INVALID KEY CHOOSE FROM 1 or 2");
        }
    }
    
    

    printf("Name   Attack   Speed   HealthPower  Tier\n");
    for (int i = 0; i < n; i++)
    {printf("%s\t%d\t%d\t%d\t%c\n",
    array[i].name,
    array[i].Attack,
    array[i].Speed,
    array[i].HealthPower,
    array[i].tier);}
 return 0;}