/////upper orlower

#include<stdio.h>
main()
{
char c;
printf("enter the character...");
scanf("%c",&c);
printf("character...\n",c);
if (c>=97 && c<=122)
printf("%c.....lower latter....\n",c);
else if (c>='A' && c<='Z')
printf("%c.....upper latter....\n",c);
else if (c>='0' && c<='9')
printf("%c.....digit....\n",c);
else
printf("out of lower or upper latter or digit\n");
}


