/*10) Write a program to print the non repeted numbers of  a given array.
        Ex : if   int a[] = {0,3,1,0,5,1,2,0,4,5}
                Output :  3, 2, 4 */
#include<stdio.h>
main()
{
		int a[10],i,j,l,s=0,c=0,c1=1,t[10],k;
		printf("DATA::");
		l=sizeof(a)/sizeof(a[0]);
		for(i=0;i<l;i++)
			scanf("%d",&a[i]);
		for(i=0;i<l;i++)
			printf("%d ",a[i]);
		for(i=0;i<l-c;i++)
		{
			c1=1;
			for(j=i+1;j<l-c;j++)
				if(a[i]==a[j])
				{
					for(k=j;k<l-c;k++)
						a[k]=a[k+1];
					c++;
					c1++;
					j--;
				}
			
			if(c1==1)
			t[s++]=a[i];
		}
		printf("\n");
		for(i=0;i<s;i++)
		printf("%d ",t[i]);
}				
