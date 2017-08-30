//////converting lower to upper string latter
#include<stdio.h>
void cp(char *);
main()
{
char a[100];
printf("enter the string...");
scanf("%[^\n]",a);
printf("before.......\n\t%s",a);
cp(a);
printf("\nafter......\n\t%s",a);
printf("\n");
}
void cp(char *c)
{
int i;
for(i=0;c[i];i++)
if(c[i]>='a'&&c[i]<='z')
c[i]=c[i]-32;




}

