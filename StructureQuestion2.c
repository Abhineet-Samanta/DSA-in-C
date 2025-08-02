# include <stdio.h>
#include<string.h>
struct Person
{
    char name[100];
    float salary;
    int age;
}a,b;

int main(){
    strcpy(a.name,"Aman");
    a.salary=9000;
    a.age=22;
    strcpy(b.name,"Abhineet");
    b.salary=100000;
    b.age=22;
    printf("%s\n",a.name);
    printf("%d\n",b.age);
}