// i/p salary 40% allowance 20% rent gross salary?????
#include<stdio.h>
main()
{
int  S,A,H,G;
printf("enter the basic salary.....");
scanf("%d",&S);
printf("\nenter the dearness  allowance of salary.....");
scanf("%d",&A);
printf("\nenter the house rent allowance of salary.....");
scanf("%d",&H);
A=(S*A)/100;
printf("dearness...%d\n",A);
H=(S*H)/100;
printf("house rent....%d\n",H);
G=S-A-H;
printf("Gross salary.....%d\n",G);
}
