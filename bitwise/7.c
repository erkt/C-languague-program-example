///ass lan bitwise ex 7...

#include<stdio.h>
main()
{
long long int a,b,c,d,e=0,f=0,i;
printf("Enter the number.....");     // user gives number
scanf("%lld",&a);
for(i=31;i>=0;i--)                  //for loop coverst decimal to binary
printf("%lld ",a>>i&1);
printf("\n");
printf("Enter the number of rotations....."); // user gives rotation
scanf("%lld",&b);
f=32-b; ///for left rotation count
c=a<<(f);
//for(i=31;i>=0;i--)
//printf("%lld ",c>>i&1);

//printf("\n");
d=a>>b;
//for(i=31;i>=0;i--)
//printf("\n%lld ",d>>i&1);

e=c|d;
printf("\n");
for(i=31;i>=0;i--)
printf("%lld ",e>>i&1);
printf("\n");
printf("Result.....%lld   a..%lld  b..%lld  c..%lld  d..%lld\n",e,a,b,c,d);
printf("\n");
}

