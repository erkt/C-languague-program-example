///////// if upper then convert into lower and if lower then it convert into upper

#include<stdio.h>
main()
{

char c,d;
printf("enter the any character......");
scanf("%c",&c);
printf("CHARACTER.....%c.\n",c);
if (c>='a'&&c<='z')
{
d=c-32;
printf("character is lower case...%c..\nafter converted character is upper case..%c\n",c,d);
}
if (c>='A'&&c<='Z')
{
d=c+32;
printf("character is upper case....%c.\nafter converted character is lower case..%c\n",c,d);
}
}
