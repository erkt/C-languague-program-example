/*10) Write a program to remove the conjucutive spaces in a given string line.
Ex: Input:  Vector        India      Pvt     Ltd
Output: Vector India Pvt Ltd;
 */
#include<stdio.h>
main()
{
	char s[100];
	int i,j,n,l;
	printf("enter the string...");
	scanf("%[^\n]",s);
	printf("before.......%s\n",s);
	for(i=0;s[i];i++);
	l=i;
//	for(i=0,n=0;i<=l;i++)
// 1st remove
		for(i=0;s[i];i++)
		{		
		if(s[i]==' '&&s[i+1]==' ')		
		{
			for(j=i+1;s[j];j++)
				s[j]=s[j+1];
				i--;
		}
		}
		if(s[0]==' ')		
		{
			for(j=i;s[j];j++)
				s[j]=s[j+1];
			i--;
		}
	/*	else if(s[i]!=' ')
			n=0;
///2 nd remove spce	
	else if(s[i]==' ')
		{
			n++;
			if(n>1)
			{
				for(j=i;s[j];j++)
					s[j]=s[j+1];
				i--;
			}
		}*/
/*	for(i=0;s[i];i++)
	printf("%d ",s[i]);
*/	printf("after.....%s\n",s);
}
