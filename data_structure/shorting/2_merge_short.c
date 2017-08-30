#include<stdio.h>
#include<stdlib.h>
void sort(int *,int );
void pr(int *,int);
main()
{
int a[5],b[6],i,j,k,l,temp,*c;
printf("enter the data for 1 row::");
for(i=0;i<5;i++)
scanf(" %d",&a[i]);
printf("enter the data for 2 row::");
for(i=0;i<6;i++)
scanf(" %d",&b[i]);

sort(a,5);
pr(a,5);
sort(b,6);
pr(b,6);
c=malloc(sizeof(int)*12);
for(i=0,j=0,l=0;i<5;i++)
{
	if(a[i]>b[j])
	c[l++]=b[j++];
	else
	c[l++]=a[i];
}
void sort(int *a,int n)
{
int i,j,temp;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
	if(a[j]>a[j+1])
	{
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	}
}
}
}
void pr(int *a,int n){
int i;
printf("Shorted data::");
for(i=0;i<n;i++)
printf(" %d",a[i]);
printf("\n");
}
