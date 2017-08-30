#include<stdio.h>
main()
{
while(1)
{int a,b,c;
printf("enter value=");
scanf("%d",&a);
b=a;
//(a==((a>>3)<<3))?(printf(" %d is  divisivble by 8*%d....\n",b,a>>3)):(printf(" %d is  not divisivble by 8.....\n",b));
(a=a&(a-7))?(printf(" %d is not  divisivble by 8*%d....\n",b,a>>3)):(printf(" %d is   divisivble by 8.....\n",b));
}

}
