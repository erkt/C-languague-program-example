/////////grade of marks

#include<stdio.h>
main()
{
	int a[10],j=1,i;

	for(i=1;i<=10;i++)
	{
		printf("enter the marks....%d subject marks....",j++);
		scanf("%d",&a[i]);
//		printf("%d\n",a[i]);
	}

	i=1;
abc:if(a[i]<=100)
{
if(a[i]<40)
    {	    printf("%d subject marks grade is fail...\n",i);}
	    else if(a[i]>=90)
	    {	    printf("%d subject marks grade is AA...\n",i);}
		    else if(a[i]>=80)
		    {	    printf("%d subject marks grade is AB...\n",i);}
			    else if(a[i]>=70)
			    {	    printf("%d subject marks grade is BB...\n",i);}
				    else if(a[i]>=60)
				    {	    printf("%d subject marks grade is BC...\n",i);}
					    else if(a[i]>=50)
					    {	    printf("%d subject marks grade is CC...\n",i);}
						    else if(a[i]>=40)
						    {	    printf("%d subject marks grade is CD...\n",i);}
    else
    {}
 }   if(i<10)
    {
	    i++;
	    goto abc;
    }
}

