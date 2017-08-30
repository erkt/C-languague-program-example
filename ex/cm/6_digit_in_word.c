#include<stdio.h>
char *p[]={"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
int word(int num,int vv){		
	if(num){
		printf("%s ",p[num%10]);
		return  word((num/10),vv);
	}
	else
	while(vv--)
	printf("%s ",p[0]);
}

main(){
	int n,temp=0,zero_co=0,du;
	scanf("%d",&n);
	du=n;
	while(!(du%10))
	{
		zero_co++;
		du/=10;
	}
	while(n){
		temp=temp*10+(n%10);
		n/=10;
	}
	word(temp,zero_co);
	printf("\n");
}

