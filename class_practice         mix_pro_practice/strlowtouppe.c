#include<stdio.h>
main()
{
int i;
char a[10];
printf("enter the string....");
scanf("%s",a);
printf("%s\n",a);
for(i=0;a[i];i++)
if(a[i]>='a'&&a[i]<='z')
a[i]=a[i]-32;
printf("%s\n",a);
}
