#include<stdio.h>
#define max(a,b,c) (a>b)?((a>c)? printf("%d\n",a):printf("%d\n",c)):((b>c)?printf("%d\n",b):printf("%d\n",c))
main(){
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	max(x,y,z);
}
