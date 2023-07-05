/*1
  21
  321
  4321
  54321*/


#include<stdio.h>
#include<conio.h>

void main (){

int a,b;

clrscr();

for(a=1;a<=5;a++){
   for(b=a;b>=1;b--){
       printf("%d",b);
   }
printf("\n");
}

getch();
}