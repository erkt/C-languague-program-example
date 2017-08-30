/*22)Ex:   "Osama bin laden"  & "Old man in a base"  both are anagrams.
	  “study”  & “dus%@ty123” both are anagrams. 
			      Here after removing special characters and digits ----> “ dusty “.*/
#include<stdio.h>
int an(char * s ,char *s1)
{
	int i,j,l,c=0,k=0;
	for(i=0;s[i];i++)
	{
		for(j=0;s1[j];j++)
			if(s[i]==s1[j])
				for(l=j;s1[l];s1[l]=s1[l+1],l++);
	}
	for(i=0;s1[i];i++)
		if((s1[i]>='a'&&s1[i]<='z')||(s1[i]>='A'&&s1[i]<='Z'))
			c++;
	return c ;
}
main()
{
	char s1[1000],s2[1000],s3[1000],s4[1000];
	int i,j;
	printf("1st string::");
	scanf("%[^\n]",s1);
	printf("2nd string::");
	scanf(" %[^\n]",s2);
	for(i=0;s1[i];s3[i]=s1[i],i++);s3[i]=s1[i];	
	for(i=0;s2[i];s4[i]=s2[i],i++);s4[i]=s2[i];	
	j=an(s3,s4);
	if(j==0)
		printf("\n''1st::%s '' & '' 2nd::%s ''both are anagram..\n",s1,s2);
	else
		printf("\n1st::%s  &  2nd::%s  is both are not a anagram..\n",s1,s2);

}


