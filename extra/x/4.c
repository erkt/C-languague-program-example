#include<stdio.h>
main()
{
while(1){
int i,j;
printf("DATA::");
scanf("%d",&i);
j=i;
i=i>>4;
i=i<<4;
printf("%d\n",i);
if(j!=i)
;
else
printf("Divisible\n");
}
}
