#include<stdio.h>
main(){
	float f,ans;
	int j;
	printf("Enter float number::");
	scanf("%f",&f);
	f=f*100;
	j=f;
	ans=f-j;
	if(ans>=0.5)
		ans=(f+1)/100;
	else
		ans=f/100;
	printf("N:%f\n",ans);
}

