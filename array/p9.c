/*
9) Write a C program to find the duplicate elements of a given array and find the count of
     duplicated elements.
 
     Ex: if  int a[] = {0,3,1,0,5,1,2,0,4,5}

      output : -
      The duplicate elements are  existed in an array 
       0  -- 3 times
       1  -- 2 times
       5  -- 2 times 
*/
#include<stdio.h>
main()
{
int s[10],c[10],k,a[10];
	int i,j,n,m,g,n1[10],l;
l=sizeof(s)/sizeof(s[0]);
	printf("enter the number....");
for(i=0;i<l;i++)	
scanf("%d",&s[i]);
	for(i=0;i<l;c[i]=s[i],i++);
	for(i=0,g=0,a[g]=0;i<l;i++)
	{
		for(j=i,n=1;j<l;j++)
		{
			for(m=0;m<g;m++)
			if(c[i]==a[m])
			{
			i++;			
			break;
			}	
			if(c[i]==c[j])	
				n++;
		}
		if(n>1)
		{
			a[g]=c[i];
			n1[g]=n;
			g++;
		}
	}
	//printf("%s\n",c);
	for(i=0;i<g;i++)
		printf("digit....%d\tduplicate.....%d\n",a[i],n1[i]);
}

