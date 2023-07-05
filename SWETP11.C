/*10101
  1010
  101
  10
  1*/


#include<stdio.h>
#include<conio.h>

void main (){

int a,b;

clrscr();

for(a=5;a>=1;a--){
   for(b=1;b<=a;b++){
       printf("%d",b%2);
   }
printf("\n");
}

getch();
}