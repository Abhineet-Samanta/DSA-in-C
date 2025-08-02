#include<stdio.h>
#include<string.h>
typedef struct date
{
   int date;
   int month;
   int year;
}date;
int main(){
date a;
date b;
printf("enter first date:- ");
scanf("%d",&a.date);
printf("enter first month:- ");
scanf("%d",&a.month);
printf("enter first year:- ");
scanf("%d",&a.year);
printf("enter second date:- ");
scanf("%d",&b.date);
printf("enter second month:- ");
scanf("%d",&b.month);
printf("enter second year:- ");
scanf("%d",&b.year);
if(a.date==b.date && a.month==b.month
&& a.year==b.year){
   printf("EQUAL");
}else{
   printf("NOT EQUAL");
}
}