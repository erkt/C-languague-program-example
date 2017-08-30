#include<stdio.h>
int main(){
int i=0;
while(i>=0) i++;
printf("Signed int Range::%d to %d\n",i,i-1);

unsigned int j=1;
while(j>0) j++;
printf("Unsigned int Range::0 to %u\n",j-1);

return 0;
}
