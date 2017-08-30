/* A B C D E F G F E D C B A
   A B C D E F   F E D C B A
   A B C D E       E D C B A
   A B C D           D C B A  
   A B C               C B A
   A B                   B A
   A                       A
*/
#include<stdio.h>
main()
{
	int i,j,k,l,n;
	char ch;
	printf("enter the char...");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
		n=ch-'A';
	if(ch>='a'&&ch<='z')
		n=ch-'a';
	for(i=0;i<=n;i++)
	{
		for(j=-(n);j<=(n);j++)
		{
			k=j;
			if(k<0)
				k=-k;
			if(k<i)
			printf("  ");
			else
				printf("%c ",ch-k);
		}
		printf("\n");
	}
}
