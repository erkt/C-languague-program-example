// decimal to hexadecimal and octal.....
#include<stdio.h>
main()
{
int d,o,h,i;
printf("enter the decimal number=");
scanf("%d",&d);
printf("DECIMAL to BINARY\n");
for(i=31;i>=0;printf("%d",d>>i&1),i--);
int a,b;
a=d;

printf("\nDECIMAL to OCTAL\n");
for(;a>0;)
{
b=a%8;
a=a/8;
printf("%d",b);
}
printf("\n");
}
