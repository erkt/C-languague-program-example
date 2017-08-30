/*22)Ex:   "Osama bin laden"  & "Old man in a base"  both are anagrams.
  “study”  & “dus%@ty123” both are anagrams. 
  Here after removing special characters and digits ----> “ dusty “.*/
#include<stdio.h>
void sot(char * s)
{
	int i,j;
	char c;
	for(i=0;s[i];i++)
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
			continue;
		else
		{
			for(j=i;s[j];s[j]=s[j+1],j++);
			i--;
		}	
	for(i=0;s[i];i++)
	{
		if(s[i]==' ')
			for(j=i;s[j];s[j]=s[j+1],j++);
		for(j=i;s[j];j++)
			if(s[i]>s[j])
			{
				c=s[i];
				s[i]=s[j];
				s[j]=c;
			}
	}
	printf("sot::%s....\n",s);
}
main()
{
	char s1[1000],s2[1000],s3[1000],s4[1000];
	int i;
	printf("1st string::");
	scanf("%[^\n]",s1);
	printf("2nd string::");
	scanf(" %[^\n]",s2);
	for(i=0;s1[i];s3[i]=s1[i],i++);s3[i]=s1[i];	
	for(i=0;s2[i];s4[i]=s2[i],i++);s4[i]=s2[i];	
	sot(s3);
	sot(s4);
	for(i=0;s3[i];i++)
		if(s3[i]!=s4[i])
			break;
	if(s3[i]==s4[i])
		printf("\n''1st::%s '' & '' 2nd::%s ''both are anagram..\n",s1,s2);
	else
		printf("\n1st::%s  &  2nd::%s  is both are not a anagram..\n",s1,s2);

}


