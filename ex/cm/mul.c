#include<stdio.h>
main(){
	int a,b,ans=0,check=1;
	while(check){
		scanf("%d %d",&a,&b);
		check=b;
		while(b!=0){
			if(b&1)
				ans+=a;
			a<<=1;
			b>>=1;
		}
		printf("%d\n",ans);
		ans=0;
	}
}
/*#include<stdio.h>
main(){
	int n,n1,ans;
	scanf("%d %d",&n,&n1);
	printf("ans::%d\n",n*n1);
	if(n1==1||n==1)
		if(n==1)
			ans=n1;
		else
			ans=n;
	if(n1==2)
		ans=n<<n1-1;
	else if(n==2)
		ans=n1<<n-1;
	else if(n1==4)
		ans=n<<2;
	else if(n==4)
		ans=n1<<2;
	else{
		if(n1/5==1)
			if(n1>>1==1||n1>>2==1)
				if(n1>>2==1)
					n1-=1;
		ans=(n<<(n1-2))+n;
	}
	printf("Ans::%d\n",ans);
}*/
