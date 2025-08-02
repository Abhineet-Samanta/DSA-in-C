#include <stdio.h>

int main(){
 struct pokemon {
//user defined data type 
  int health;
  int speed;
  int attack;
  char tier;//G S A B C D
};
struct pokemon pikachu;
printf("Enter attack of pikachu:-");
scanf("%d",&pikachu.attack);
pikachu.health=50;
pikachu.speed =100;
pikachu.tier='A';



struct pokemon chizzard;
chizzard.attack=130;
chizzard.health=80;
chizzard.speed =80;
chizzard.tier='S';

struct pokemon mewtwo;
mewtwo.attack=170;
mewtwo.health=150;
mewtwo.speed =200;
mewtwo.tier='G';

printf("%d\n",pikachu.attack);
printf("%d",mewtwo.health);

}