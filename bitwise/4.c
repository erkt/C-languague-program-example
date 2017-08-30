//interchange
#include<stdio.h>
main()
{
int x,y;
printf("enter value....");
scanf("%d%d",&x,&y);
printf("\nBefore interchange x=%d,,y=%d",x,y);
x=x^y;
y=x^y;
x=x^y;
printf("\nafter interchange x=%d,,y=%d\n",x,y);
}
