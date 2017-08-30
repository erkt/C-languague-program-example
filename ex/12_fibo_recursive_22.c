#include<stdio.h>
void fibo(int n);
main(){
	int n,a=0,b=1;
	scanf("%d",&n);
	printf("%dth fibo series.\n",n);
	fibo(n);
	printf("\n");
}
void fibo(int n){
	static int a=0,b=1,c;
	c=a;
	if(n){
		if(!a)
			printf("%d %d ",a,b);
		else
			printf("%d ",b);	
		a=b;b=c+b;
		fibo(--n);
	}
	else{
		printf("\n Done!!! \n");
	}
}
