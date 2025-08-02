#include<stdio.h>
#include<string.h>
typedef struct Person
{  char name[100];
   int age;
   float weight;
}Person;
void change(Person *y){
    y->age=18;
    y->weight=62.88;
}
int main(){
Person p1;
strcpy(p1.name,"Arjun");
p1.age=40;
p1.weight=60.8;
printf(" %s %d %f ",p1.name,p1.age,p1.weight);
Person*x=&p1;
change(x);
printf(" %s %d %f",p1.name,p1.age,p1.weight);


}