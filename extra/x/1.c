/*sbhfbsgfdhsgbfhsbvhsvbhsvbhsv*/#include<stdio.h>
main()
{
char ch[100],s[100],temp;
int i,j,k,l;
printf("string::");
scanf("%s",ch);
for(i=0;ch[i];i++);l=i;
for(i=0;ch[i];i++)
{
	s[0]=ch[0];
	{
		for(j=i+1,k=l-1;ch[j];j++,k--)
		{
			s[k]=ch[j];
		for(k=0;s[k];k++)
			printf("%c ",s[k]);
	}
	printf("\n");	
}
}
}

