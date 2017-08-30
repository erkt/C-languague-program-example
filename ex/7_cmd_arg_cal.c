#include<stdio.h>
main(int argv,char**argc){
if(argv==4){
int n,n1,op,ans;
n=atoi(argc[1]);
n1=atoi(argc[3]);
if(argc[2][0]=='+')
ans=n + n1;
printf("%d\n",ans);
}
}
