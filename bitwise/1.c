// set,clear,toggel bit
#include<stdio.h>
main()
{

	int k,n;
	printf("enter the value.......");
	scanf("%d",&k);
	printf("\nvalue.....",k);
	printf("enter the position wnat to set....");
	scanf("%d",&n);
	printf("\nvalue.....",n);
	// set bit
	k>>n&1?printf(" Before set %dth Bit is '1'......",n):printf("Before Bit %dth Bit is '0'......",n);
	printf("\n..............set BIT..............\n");
	k=k|1<<n;
	k>>n&1?printf(" After set %dth Bit is '1'......\n",n):printf("After Bit %dth Bit is '0'......\n",n);
	printf("k=%d\n",k);
	// clear bit
	printf("\n..............clear BIT..............\n");
	printf("pos for clear bit...");
	scanf("%d",&n);printf("clear bit pos...%d",n);
	k=k&~(1<<n);
	k>>n&1?printf(" After clear %dth Bit is '1'......\n",n):printf("After clear Bit %dth Bit is '0'......\n",n);
	printf("k=%d\n",k);
	//toggle bit	
	printf("pos for toggle bit...");
	scanf("%d",&n);printf("toggle bit pos...%d",n);
	k>>n&1?printf(" %dth Bit is '1'......\n",n):printf("%dth Bit is '0'......\n",n);
	k=k^(1<<n);
	k>>n&1?printf("atfer toggle %dth Bit is '1'......\n",n):printf("After toggle %dth Bit is '0'......\n",n);
	printf("k=%d\n",k);
}
