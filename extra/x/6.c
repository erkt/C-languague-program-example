////p[roducrt of digit recursion
#include<stdio.h>
main()
{
int i,k;
scanf("%d",&i);
k=pod(i);
printf("%d product of digit:: %d \n",i,k);
}
int pod(int i)
{
	static ans=1;
	if(i)
	{
		ans=ans*(i%10);
		pod(i/10);
	}
	else
	return ans;
}
