#include<stdio.h>
void main()
{
long n;
int count;
printf("enter the integer:");
scanf("%d",&n);
while(n!=0)
{
n/=10;
++count;
}
printf("\n the count number is:%d",count);
}

