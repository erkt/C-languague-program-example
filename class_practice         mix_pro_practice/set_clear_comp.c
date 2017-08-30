/// set clear complemnet
#include<stdio.h>
main()
{

	int n,p,o,j=1;
	printf("enter the number...");
	scanf("%d",&n);
a:printf("enter the position number...");
  scanf("%d",&p);
  if (j<3)
  if (p>=31)
	  {
		  j++;
		  goto a;
	  }
  printf("option 1)set 2)clear 3)complement....\n");
  scanf("%d",&o);

if (o==1)
{
	n=n|1<<p;
	printf("number...%d",n);
}
else if(o==2)
{
	n=n&~(1<<p);
	printf("number...%d",n);
}
else if(o==3)
{
	n=n^(1<<p);
	printf("number...%d",n);
}
else
{
	printf("unkonwn input");
}





}
