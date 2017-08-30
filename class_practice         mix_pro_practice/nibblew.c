#include<stdio.h>
main()
{
char ch;
printf("enter the hex value..");
scanf("%x",&ch);
printf("before swaping nibble....%x\n",ch);
ch=ch>>4|ch<<4;
printf("after swaping nibble....%x\n",ch);
}
