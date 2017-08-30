#include<stdio.h>
int main(){
char *p="hello";
char a[]="hjsdhjkskjdshfj";
printf("p:::%s\na:::%s\n",p,a);
p="-----------------\n";
p[5]='K';
a[5]='A';
printf("p:::%s\na:::%s\n",p,a);
}
