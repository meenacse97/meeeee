#include<stdio.h>
void main()
{
char c;
int uppercase,lowercase;
printf("\n enter the char:");
scanf("%c",&c);
uppercase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
lowercase=(c=='A'||c=='E'||c=='I'|c=='O'||c=='U');
if(uppercase||lowercase)
{
printf("it is a vowel");
}
else
printf("it is a consonant");
}
