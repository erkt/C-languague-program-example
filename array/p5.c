/* 5 Write a C program to reverse  the elements of a given array.*/
#include<stdio.h>
main()
{
int n[5],i,j,l,temp;
printf("enter the number...");
l=sizeof(n)/sizeof(n[0]);
for(i=0;i<l;i++)
scanf("%d",&n[i]);
for(i=0;i<l;i++)
printf("%d ",n[i]);
printf("\n========================\n");
for(i=0,j=l-1;i<j;i++,j--)
{
temp=n[i];
n[i]=n[j];
n[j]=temp;
}
for(i=0;i<l;i++)
printf("%d ",n[i]);
printf("\n========================\n");

}
