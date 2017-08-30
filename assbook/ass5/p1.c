#include<stdio.h>
main()
{
int a[20],i;
for(i=0;i<20;i++)
a[i]=i;
for(i=0;i<20;i++)
a[i]=a[20-i];
for(i=0;i<20;i++)
printf("%d ",a[i]);
printf("\n");
/*char *str1="abcd";
char str2[]="abcd";
char str3[10]="vector";
printf("%d %d %d %d ",sizeof(str1),sizeof(str2),sizeof("abcd"),sizeof(str3));


int i,n;
char *x="vector";
n=strlen(x);
*x=x[n-3];
for(i=0;i<n;++i)
{
printf("%s\n",x);
x++;
}

char c[2]="A";
printf("\n%c",c[0] );
printf("\n%s",c);

 
int a[5]={5,1,15,20,25};
int i,j,k=1,m;
i=++a[1];
j=a[1]++;
m=a[i++];
printf("\n%d %d %d \n",i,j,m);

int sub[50],i;
for(i=0;i<=48;i++);
{
sub[i]=i;
printf("\n%d",sub[i]);
}*/

}

