#include<stdio.h>
void main()
{
int yr;
printf("enter the yr:");
scanf("%d",&yr);
if(yr%400==0||yr%100==0&&yr%4==0)
{
printf("\n leap yr");
}
else
printf("\n not a leap yr");
}
