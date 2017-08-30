#include<stdio.h>
struct st{
int bi1:1;
int bi2:2;
int bi3:3;
}bit={1,2,2};


main(){
unsigned short int m=32;
printf(" %x     %x\n",m,~m>>4);
printf("%d %d %d\n",bit.bi1,bit.bi2,bit.bi3);


}
