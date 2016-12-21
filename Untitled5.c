#include<stdio.h>
void main()
{
int a,b,c,n;
printf("enter the three nos:");
scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
{
printf("\n a is greatest");
}
else if(b>c)
    printf("\n b is greatest");
else
    printf('"\n c is greatest");
}
