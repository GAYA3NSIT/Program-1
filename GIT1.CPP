#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float i;
scanf("%f",&i);
if(i<0)
{
printf("\n the number is negative");
}
else if(i>0)
{
printf("\n the number is positive");
}
else
{
printf("\n the number is zero");
}
getch();
}
