#include<stdio.h>
main()
{
	int a[2][10],count,i,k,j,temp;
	count=sizeof(a)/sizeof(a[1]);
	printf("Enter the data::");
	for(i=0;i<20;i++)
		scanf("%d",&a[0][i]);

	for(i=0;i<20;printf("%d ",a[0][i++]));
	printf("\n");

	for(i=1;i<20;i++){
		temp=a[0][i];
		for(j=i-1;j>=0;j--){
			if(temp<a[0][j])
				a[0][j+1]=a[0][j];
			else{
				a[0][j+1]=temp;
				break;
			}
		}
		if(j==-1)
			a[0][j+1]=temp;
		for(k=0;k<20;printf("%d ",a[0][k++]));
		printf("\n");
	}

	for(i=0;i<20;printf("%d ",a[0][i++]));
	printf("\n");
}
