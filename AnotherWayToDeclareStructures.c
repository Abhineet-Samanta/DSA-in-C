#include<stdio.h>
#include<string.h>
typedef struct Weapons{
char name[100];
int added_attack;
int added_defense;
int added_hp;
int added_movement;
char description[1000];
}BronzeTierWeapon;
int main(){
    BronzeTierWeapon Cloth_Boots=
    {"Cloth Boots",0,0,0,3,"comfy wear"};
    BronzeTierWeapon Obsidean_sword= 
    {"Obsedian sword",3,1,0,0,"made of Obsedian"};
    printf("\n%-20s %-10s %-10s %-10s %-10s %-40s\n", 
        "Name", "Attack", "Defense", "HP", "Move", "Description");
    printf("%-20s %-10d %-10d %-10d %-10d %-40s\n", 
        Cloth_Boots.name, Cloth_Boots.added_attack, Cloth_Boots.added_defense,
        Cloth_Boots.added_hp, Cloth_Boots.added_movement, Cloth_Boots.description);
    printf("%-20s %-10d %-10d %-10d %-10d %-40s\n", 
        Obsidean_sword.name, Obsidean_sword.added_attack, Obsidean_sword.added_defense,
        Obsidean_sword.added_hp, Obsidean_sword.added_movement, Obsidean_sword.description);
}