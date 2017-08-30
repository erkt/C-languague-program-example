#include<stdio.h>
char *s[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twevele","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
char *d[]={"Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninty"};
char *t[]={"Hundred","Thousand"};
void word(int num,int last){

	if(0<=num && num<20){
		printf("%s ",s[num]);
		if(last)
		return;
	}
	else if(20<=num&&num<100){
		int temp=num%10;
		last=1;
		printf("%s ",d[(num/10)-2]);
		if(temp)
		word(temp,last);
	}
	else if(100<=num&&num<1000){
		if(num){	
		word(num/100,last);
		printf("%s ",t[0]);
		}
		if(num%100)
		word((num%100),last);
	}
	else
		printf("Wrong input\n");
}
main(){
	int num;
	printf("Enter number::");
	scanf("%d",&num);
	word(num,0);
	printf("\n");
}
