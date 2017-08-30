#define SWAP(b,c,type) {type t;t=c;c=b;b=t;}
main()
{

float f=20.23,f1=32.02;
int a=23,j=45;
printf("%d %d------",a,j);
SWAP(a,j,int)
printf("%d %d\n",a,j);
printf("%f %f-----",f,f1);
SWAP(f,f1,float)
printf("%f %f",f,f1);
}
