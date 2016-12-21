#include<stdio.h>
void main()
{
int a,b,c,i;
printf("\n enter the starting and ending limit:");
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
if(i%2!=0){
printf("odd nos:%d",i);
}
}
}

