#include<stdio.h>
main(){
int i,a[5],big=0,temp=0,k;

for(i=0;i<5;i++)	scanf("%d",&a[i]);
temp=a[0];
for(i=0;i<5;i++){
	if(big<a[i])
           big=a[i];
	     if(temp>big)
		temp=a[i];	
}

printf("%d--%d\n",big,temp);
}
