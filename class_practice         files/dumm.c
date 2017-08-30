#include<stdio.h>
main(int a,char **v)
{
	int c=0;
	FILE *p;
	if(a!=2)
	{
		printf("Usage:: ./a.out F_name..\n");
		return;
	}
	p=fopen(v[1],"r");
	if(p==0)
	{
	printf("%s is not present..\n",v[1]);
	return;
	}
/*	while(fgetc(p)!=EOF)
	c++;
*/
	fseek(p,0,SEEK_END);
	c=ftell(p);


	printf("%s file size is %d\n",v[1],c);
}
