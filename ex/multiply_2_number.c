#include<stdio.h>
int ad(int ,int);
int main(){
int n,n1,p=0,i,j;
scanf("%d   %d",&n,&n1);
for(j=31;j>=0;printf("%d",n>>j--&1));
printf("\n");
for(j=31;j>=0;printf("%d",n1>>j--&1));
printf("\n");
for(i=0;i<n1;i++){
p=ad(p,n);
for(j=31;j>=0;printf("%d",p>>j--&1));
printf("\n");
}
printf("%d  *  %d  = %d\n",n,n1,p);
return 0;
}
int ad(int n,int n1){
int c,j;
while(n1!=0){
printf("Before::");
for(j=31;j>=0;printf("%d",n1>>j--&1));
printf("\n");
c=(n&n1)<<1;
n=n^n1;
n1=c;
printf("After::");
for(j=31;j>=0;printf("%d",n1>>j--&1));
printf("\n");
}
return n;
}
