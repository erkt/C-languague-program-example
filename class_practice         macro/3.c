#define MUL(i,j) i*j
int mul(int i,int j)
{
return(i*j);
}
main()
{
int i=2,j=3,k;
k=MUL(i,j);
printf("%d\n",k);
k=mul(i,j);
printf("---%d\n",k);
}
