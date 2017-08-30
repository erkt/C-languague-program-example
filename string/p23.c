/*23) program for  Decryption of a given Encrypted string line with respect to given
        key number.
               The letter at position of the key and a multiple of key is interchanged with the next
       letter. Spaces and special characters are to be ignored. If the letter is the last one in the
       array, then no interchange is required.
	     Design  a  function called Decryptor to receive the Encrypted data from the main 
      function and decrypt the data.
                                4    8   12   16    20    24       28   32   36 
     Ex:  Input String   :  “Expcet Porblmes adn eat thef mor rbeafkast”.
             If Key : 4   then,  4 multiples ---> 4,8,12,16,20,24,28,32,36 these letters has to interchange with next Characters.
             Output String : “Expect Problems and eat them for breakfast”.
    Try this and Know it.
    Input String : “Our rgeaetst ewakenss iles ni giivng pu. thm eosc teratin awy ts ouceed si
                            alwyas tt ory ujst noe mroe tmie”.      
    Key : 4
    Output : ????????*/
#include<stdio.h>
main()
{
	char s[1000],c,a;
	int i,j,k,l=0,n;
	printf("Enter String::");
	scanf("%[^\n]",s);
	printf("enter key::");
	scanf("%d",&n);
	for(i=0;s[i];i++)
	{
		if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
		{
			l++;	
			j=i+1;
			if(l%n==0)
			{
				if(s[j]==' ')
				{
					c=s[j+1];
					s[j+1]=s[j-1];
					s[j-1]=c;
				}
				else if(s[j]=='\0')
				{
					printf("Thanks..\n");
				}
				else
				{
				/*	c=s[j-1];
					s[j-1]=s[j];
					s[j]=c;
				*/	s[j-1]=s[j-1]+s[j]-(s[j]=s[j-1]);
				}
			}
		}
	}	
	printf("OUTPUT String::%s\n",s);
}
