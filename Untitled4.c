#include<stdio.h>
void main()
{
char c;
printf("\n enter the alphabet:");
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
{
printf("\n it is a alphabet");
}
else
printf("\n not a alphabet");
}
