/*Write a C program to input 10 numbers through the keyboard into an array and
  display the results of addition of even numbers and product of odd numbers.  */
#include<stdio.h>
main()
{	int a[10],l,i,o[10],e[10],j,k,s,p;
	printf("enter the number....");
	l=sizeof(a)/sizeof(a[0]);
	for(i=0;i<l;i++)
		scanf("%d",&a[i]);
	for(i=0;i<l;i++)
		printf("%d ",a[i]);
	for(i=j=k=j=0,p=1;i<l;i++)
	{
		if(a[i]%2==0)
		{
			e[j]=a[i];
			j++;
			s=s+a[i];
		}
		else
		{
			o[k]=a[i];
			k++;
			p=p*a[i];
		}
	}
	printf("\neven number.....");
	for(i=0;i<j;i++)
		printf("%d ",e[i]);
	printf("\naddition of even number....%d",s);
	printf("\nodd number.....");
	for(i=0;i<k;i++)
		printf("%d ",o[i]);
	printf("\nproduct of odd number....%d\n",p); }
