#include<stdio.h>
#include<conio.h>

void main(){
int unit;
float amt, total, charge;

clrscr();
 printf("Enter your total unit ");
 scanf("%d",&unit);

if(unit<= 50){
 amt = unit *0.50;
}else if (unit <=100){
amt = 25 +(( unit-50) *0.75);
}else if (unit <=100){
amt =100+ ((unit -150) *1.20);
}else {
amt =220+(( unit-250) *1.50);
}
 charge=amt*0.20;
 total= amt +charge;

 printf("electricity bills rs. %.2f",total);


getch();



}