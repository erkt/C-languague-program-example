/// binary to decimal printing.....
#include<stdio.h>
main()
{	int n[32],i,j,k,s,p;
x:printf("enter the binary value 0 or 1...");
  k=sizeof(n)/sizeof(n[0]);
  for(i=k-1;i>=0;i--)
  {	  scanf("%d",&n[i]);
	  if(n[i]==0)
		  continue;
	  else if(n[i]==1) 
		  continue;
	  else
		  goto x;
  }
  for(i=k-1;i>=0;i--)
  {	  printf("%d",n[i]);
	  if(i%8==0)
		  printf("  ");
  }
  printf("\n");
  for(i=s=0;i<k;i++)
  {	  if(n[i]==1)
	  s=s+(1<<i);
  }
  printf("\n%d\n",s);
}
