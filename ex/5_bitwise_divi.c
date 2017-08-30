#include<stdio.h>
main(){
int n,n1,ans;
scanf("%d %d",&n,&n1);
if(n1==2)
ans=n>>1;
if(n1==4)
ans=n>>2;
if(n1==8)
ans=n>>3;
printf("%d\n",ans);
}
