#include<stdio.h>
//#define size_t int
size_t f(size_t x){
printf("In f x::%d\n",x);
return x+500;
}
int main(){



size_t j=1;
while(j>0) j++;
printf("Unsigned int Range::0 to %u\n",j-1);

j=0;
while(j>=0){ j=j+100000; printf("%d\n",j);}
printf("Sigened Range::%d to %d\n",j,j-1);






size_t i,k;
printf("size_t::%d---sizeof size_t::%d\n",i,sizeof(size_t));
k=f(i);

/*printf("enter the value::");
scanf("%d",&i);
*/
printf("size_t::%d-- %d--sizeof size_t::%d\n",i,k,sizeof(size_t));
j=1;
while(j>0) j++;
printf("Unsigned int Range::0 to %u\n",j-1);

i=0;
while(i>=0) i++;
printf("Range::%d to %d\n",i,i-1);

return 0;
}

