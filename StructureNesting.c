#include<stdio.h>
#include<string.h>
typedef struct General
{
   int Health;
   int movement;
   int attack;
   int defense;
   int range ;
   char name[100];
   char unit_type[100];
}Bronze_tier;
typedef struct Legendary_General
{
   Bronze_tier normal;
   char ability[100];
   int ExtraAttack;
   char Decription_of_ability[1000];
}Silver_tier;
typedef struct Ultra_Legendary_General
{
   Silver_tier Legends;
   char ability1[100];
   int ExtraHealth;
   char Decription_of_ability1[1000];
}Gold_tier;
int main(){
Bronze_tier Mulan;
 strcpy(Mulan.name,"Hua Mulan");
 Mulan.Health=100;
 Mulan.movement=10;
 Mulan.range=15;
 Mulan.attack=80;
 Mulan.defense=90;
 strcpy(Mulan.unit_type,"Horse Archer");
 Silver_tier Chandragupta;
strcpy(Chandragupta.normal.name,"Chandragupta Maurya");
Chandragupta.normal.attack=120;
Chandragupta.normal.defense=150;
Chandragupta.normal.movement=8;
Chandragupta.normal.Health=170;
Chandragupta.normal.range=1;
strcpy(Chandragupta.normal.unit_type,"Mahout War Elephant");
strcpy(Chandragupta.ability,"Strategic Planner");
Chandragupta.ExtraAttack=70;
 strcpy(Chandragupta.Decription_of_ability,
    "will add 70 attack points if hp is below 50 percent");
 Gold_tier Ashoka;
 Ashoka.Legends.normal.range=1;
 Ashoka.Legends.normal.attack=150;
 Ashoka.Legends.normal.Health=170;
 Ashoka.Legends.normal.defense=200;
 Ashoka.Legends.normal.movement=8;
 strcpy(Ashoka.Legends.normal.name,"Ashoka");
 strcpy(Ashoka.Legends.normal.unit_type,"Mahout war Elephant");
 strcpy(Ashoka.ability1,"Concription");
 strcpy
 (Ashoka.Decription_of_ability1,
"Restore Extra 30 hp when health is below 60 percent");
 Ashoka.ExtraHealth=30;
 strcpy(Ashoka.Legends.ability,"National Protector");
 Ashoka.Legends.ExtraAttack=50;
 strcpy
 (Ashoka.Legends.Decription_of_ability,
"Add 50 attack points if hp is below 50 percent ");




printf("\n===================== Bronze Tier General =====================\n");
printf("%-20s: %s\n", "Name", Mulan.name);
printf("%-20s: %s\n", "Unit Type", Mulan.unit_type);
printf("%-20s: %d\n", "Health", Mulan.Health);
printf("%-20s: %d\n", "Attack", Mulan.attack);
printf("%-20s: %d\n", "Defense", Mulan.defense);
printf("%-20s: %d\n", "Movement", Mulan.movement);
printf("%-20s: %d\n", "Range", Mulan.range);
printf("%-20s: %s\n", "Ability", "-");
printf("%-20s: %s\n", "Effect", "-");


printf("\n===================== Silver Tier General =====================\n");
printf("%-20s: %s\n", "Name", Chandragupta.normal.name);
printf("%-20s: %s\n", "Unit Type", Chandragupta.normal.unit_type);
printf("%-20s: %d\n", "Health", Chandragupta.normal.Health);
printf("%-20s: %d (+%d when HP<50%%)\n", "Attack", Chandragupta.normal.attack, Chandragupta.ExtraAttack);
printf("%-20s: %d\n", "Defense", Chandragupta.normal.defense);
printf("%-20s: %d\n", "Movement", Chandragupta.normal.movement);
printf("%-20s: %d\n", "Range", Chandragupta.normal.range);
printf("%-20s: %s\n", "Ability", Chandragupta.ability);
printf("%-20s: %s\n", "Effect", Chandragupta.Decription_of_ability);


printf("\n===================== Gold Tier General =====================\n");
printf("%-20s: %s\n", "Name", Ashoka.Legends.normal.name);
printf("%-20s: %s\n", "Unit Type", Ashoka.Legends.normal.unit_type);
printf("%-20s: %d (+%d when HP<60%%)\n", "Health", Ashoka.Legends.normal.Health, Ashoka.ExtraHealth);
printf("%-20s: %d (+%d when HP<50%%)\n", "Attack", Ashoka.Legends.normal.attack, Ashoka.Legends.ExtraAttack);
printf("%-20s: %d\n", "Defense", Ashoka.Legends.normal.defense);
printf("%-20s: %d\n", "Movement", Ashoka.Legends.normal.movement);
printf("%-20s: %d\n", "Range", Ashoka.Legends.normal.range);
printf("%-20s: %s\n", "Ability 1", Ashoka.Legends.ability);
printf("%-20s: %s\n", "Effect 1", Ashoka.Legends.Decription_of_ability);
printf("%-20s: %s\n", "Ability 2", Ashoka.ability1);
printf("%-20s: %s\n", "Effect 2", Ashoka.Decription_of_ability1);}