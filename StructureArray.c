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
    strcpy(array[0].name ,"Charizard");
    array[0].Attack=84;
    array[0].Speed=100;
    array[0].HealthPower=78;
    array[0].tier='G';
    strcpy(array[1].name ,"Lucario");
    array[1].Attack=70;
    array[1].Speed=110;
    array[1].HealthPower=90;
    array[1].tier='A';
    strcpy(array[2].name ,"Dragapult");
    array[2].Attack=88;
    array[2].Speed=120;
    array[2].HealthPower=142;
    array[2].tier='O';
    printf("Name   Attack   Speed   HealthPower  Tier\n");
    for (int i = 0; i < 3; i++)
    {printf("%s   %d   %d      %d   %c\n",
    array[i].name,
    array[i].Attack,
    array[i].Speed,
    array[i].HealthPower,
    array[i].tier);}
 return 0;}