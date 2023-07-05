/*12345
  2345
  345
  45
  5*/


#include<stdio.h>
#include<conio.h>

void main (){

int a,b;

clrscr();

for(a=1;a<=5;a++){
   for(b=a;b<=5;b++){
       printf("%d",b);
   }
printf("\n");
}

getch();
}