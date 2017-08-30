#include<stdio.h>
main(){
	int n,temp,n1;
	scanf("%d",&n);
	n1=n;
	temp=0;
	while(n1){
		temp+=((n1%10)*(n1%10)*(n1%10));
		n1/=10;
	}
	if(temp==n)
		printf("Armstrong number..%d \n",n);
	else
		printf("NOT Armstrong number..%d \n",n);
}
