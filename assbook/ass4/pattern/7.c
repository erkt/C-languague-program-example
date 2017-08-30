 /*       
	*
	* *
	* * * 
	* * * *        
 */
#include<stdio.h>
main()
{

int i,j,a;

printf("enter the number...");
scanf("%d",&a);

for (i=a;i>0;i--)
{
for(j=i;j<=a;j++)
printf("* ");
printf("\n");

}
}
