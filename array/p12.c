/*12) Write a C program to evaluate the following series. The series contains sum of
  square of numbers from 1 to 'n'. Strore result of each term in an array. Calculate 
  value of  ' S '  using array.

  S = 1^2 + 2^2 + 3^2 + 4^2 + ------ n^2
  =    [ 1, 4, 9, 16, -------- n^2 ]

  Suppose n = 4,

  then  S =  1^2+2^2+3^2+4^2;
  S = 1+4+9+16;  
  S  =  30.
 */
#include<stdio.h>
main()
{
	int n,s[n],a,i,sum,k;
	printf("num::");
	scanf("%d",&n);
	for(i=1,sum=0,k=0;i<=n;i++)
	{
		a=i*i;
		sum=sum+a;
		s[i]=a;
	}
	for(i=1;i<=n;i++)
		printf("%d\t ",s[i]);

	printf("=%d\n",sum);

}
