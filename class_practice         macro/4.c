#define SWAP(b,c) t=c;c=b;b=t;
main()
{

float f=20.23,f1=32.02;
int a=23,j=45,t;
printf("%d %d------",a,j);
SWAP(a,j)
printf("%d %d\n",a,j);
printf("%d %d-----",f,f1);
SWAP(f,f1)
printf("%d %d",f,f1);
}
