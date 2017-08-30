#include<stdio.h>
struct st {
	int n;
	float f;
};
main(){
	struct st m,*var;
int d;
	var=&m;
	d=(char*)(var+1)-(char*)(var);
	printf("(direct::)%d (sizeof::)%d  (pointer::)%d\n",(char*)(&m+1)-(char*)(&m ),sizeof(m),d);
}
