/*Write a C program which deletes the duplicate elements of an array.
original:[A,C,B,D,A,B,E,D,B,C]
remove duplicate result:D,E,A,B,C */
#include<stdio.h>
main()
{
	char s[10],ch[10],c;
	int i,j,l,k,a,m;
	printf("enter the array for character...");
	l=sizeof(s)/sizeof(s[0]);
	for(i=0;i<l;i++)
		scanf("%c",&s[i]);
	printf("\nbefore===============\n");
	for(i=0;i<l;i++)
		printf("%c,",s[i]);
	///////////////logic////////////////////////
	for(i=0;i<l;i++)        
	{
		c=s[i];
		for(m=i+1,k=0;m<l;m++)
			if(c==s[m])
			{
				for(j=m;j<l;j++)
					s[j]=s[j+1];
				m--;
				l--;
			}
	}
	///////////////logic////////////////////////
	printf("\nafter===============\n");
	for(i=0;i<l;i++)
		printf("%c,",s[i]);
}

