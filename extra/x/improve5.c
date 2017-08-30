#define f(arg) do\
		{\
		if(arg)\
			printf("have fun..","\n");\
		}while(i--)

int main(){
int i=2;
f(i<3);
return 0;
}
