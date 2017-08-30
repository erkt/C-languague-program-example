#include<stdio.h>
main()
{
while(1){
int i,j;
printf("DATA::");
scanf(" %d",&i);
j=i;
//i=(i>>3);
//i=(i<<3)-9;
i=i&15;
printf("%d\n",i);
if(i)
;
else
printf("Divisible\n");
}
}
