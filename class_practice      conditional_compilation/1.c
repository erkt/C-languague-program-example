#define op 1
#if(op==1)
int sum(int i,int j)
{
return (i+j);
}
#elif(op==2)
int sub(int i,int j)
{
return (i-j);
}
#elif(op==3)
int mul(int i,int j)
{
return (i*j);
}
#elif(op==4)
int div(int i,int j)
{
return (i/j);
}
#endif
main()
{
int i=20,j=43,res;
#if(op==1)
res=sum(i,j);
printf("%d",res);
#elif(op==2)
res=sub(i,j);
printf("%d",res);
#elif(op==3)
res=mul(i,j);
printf("%d",res);
#elif(op==4)
res=div(i,j);
printf("%d",res);
#else
printf("Unkown option\n");
#endif
}
