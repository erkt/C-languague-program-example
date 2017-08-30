#include<stdio.h>
void tower(int n,char fmpg,char topg,char axpg){
if (n==1){
printf("disk 			%c  to    %c   \n",fmpg,topg);
return;
}
tower(n-1,fmpg,axpg,topg);
printf("disk   %d     		%c  to    %c   \n",n,fmpg,topg);
tower(n-1,axpg,topg,fmpg);
}
main(){
int n;
printf("Disk\n");
scanf("%d",&n);
printf("Tower");
tower(n,'a','b','c');
getchar();
return 0;
}
