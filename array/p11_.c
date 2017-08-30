/* program to copy the elements of one array into another array without duplicate
       items as a first slot, and store duplicate elements as a second slot.
  
     Ex:   source array           {10,2,4,5,2,1,3,4,6,5,8,9,2}

             destination arrays  {10,2,4,5,1,3,6,8,9} ,   { 2,2,4,5} 
                                                     first slot               second slot

       Take two different arrays for first and second slots. */
#include<stdio.h>
main()
{
		int a[10],i,j,l,s=0,c=0,c1=1,t[10],k,d[10],q=0;
		printf("DATA::");
		l=sizeof(a)/sizeof(a[0]);
		for(i=0;i<l;scanf("%d",&a[i]),i++);
		printf("source::\n");
		for(i=0;i<l;printf("%d ",a[i]),i++);
		for(i=0;i<l-c;i++)
		{
			c1=1;
			for(j=i+1;j<l-c;j++)
			{
				if(a[i]==a[j])
				{
					for(k=j;k<l-c;k++)
						a[k]=a[k+1];
					c++;
					c1++;
					j--;
				}
			}
			if(c1>=1)
			{
				t[s]=a[i];
				s++;
			}
			if(c1>1)
			for(;c1>1;d[q]=a[i],c1--,q++);
			
		}
		printf("\nDestination ::\n");
		printf("first slot::");
		for(i=0;i<s;printf("%d ",t[i]),i++);
		printf("\nSecond slot::");
		for(i=0;i<q;printf("%d ",d[i]),i++);
		printf("\n");	


}				
