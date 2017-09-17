#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i;
printf("\n Enter a number:");
scanf("%d",&i);
if(i%2==0)
printf("\n The number is even");
else
printf("\n The number is odd");
getch();
}