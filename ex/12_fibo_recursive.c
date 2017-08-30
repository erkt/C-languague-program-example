#include<stdio.h>
void fibo(int n,int a,int b);
main(){
	int n,a=0,b=1;
	scanf("%d",&n);
	printf("%dth fibo series.\n",n);
	fibo(n,a,b);
	printf("\n");
}
void fibo(int n,int a,int b){
	if(n){
	if(!a)
	printf("%d %d ",a,b);
	else
	printf("%d ",b);
	int c=a;	
	a=b;b=c+b;
	fibo(--n,a,b);
	}
	else{
	printf("\n Done!!! \n");
	}
}
