#include<stdio.h>
void main(int a,char **c)
{
int *p,i;
float f;
scanf("%f",&f);
/*//int f;
//scanf("%d",&f);
for(i=32,p=(int*)&f;i>0;i--){
if(i%8==0)
printf(" ");
printf("%d",*p>>(i-1)&1);
}
printf("\nPID::%d\n",getpid());
//printf("%d\n",sizeof(main(int a,char **c)));


printf("-------Before sleep------\n");
//int j=sleep(f);
*/alarm(f);
int j=alarm(0);
//register int j=f;
//abc(f,f,f+1);
printf("-j--%d----After sleep------\n",j);
}
int abc(int a)
{
printf("%d\n",a);
}
