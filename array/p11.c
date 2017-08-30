/*11) Write a program to copy the elements of one array into another array without duplicate
       items as a first slot, and store duplicate elements as a second slot.
  
     Ex:   source array           {10,2,4,5,2,1,3,4,6,5,8,9,2}

             destination arrays  {10,2,4,5,1,3,6,8,9} ,   { 2,2,4,5} 
                                                     first slot               second slot

       Take two different arrays for first and second slots. */
#include<stdio.h>
main()
{
	int s[10],d1[10],d[10],i,j,k=0,l,a=0,c,q;
	printf("DATA::");
	l=sizeof(s)/sizeof(s[0]);
	for(i=0;i<l;scanf("%d",&s[i]),i++);
	for(i=0;i<l;printf("%d ",s[i]),i++);
	printf("\n---------------------\n");
	for(i=0;i<l;i++)
	{
		c=0;	
		for(j=i+1;j<l;j++)
		if(s[i]==s[j])
			{
				for(q=j;q<l;s[q]=s[q+1],q++);
				c++;
				l--;
				j--;
			}
		if(c>=0)
		d1[a++]=s[i];
		if(c>0)
			for(;c>0;d[k]=s[i],k++,c--);
	}
	printf("First slot::");
	for(i=0;i<a;printf("%d ",d1[i]),i++);
	printf("\nsecond slot::");
	for(i=0;i<k;printf("%d ",d[i]),i++);
	printf("\n");
}
