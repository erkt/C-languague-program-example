#include<stdio.h>
main()
{
	int a[2][10],count,i,k,j,temp,l,row;
	count=sizeof(a[0])/sizeof(a[1][0]);
	row=sizeof(a)/sizeof(a[0]);
	///entering data
	for(j=0;j<row;j++){
	printf("Enter %dth ROW::",j);
		for(i=0;i<count;i++)
			scanf("%d",&a[j][i]);
	printf("\n");
	}////printing data
	printf("DATA IN::\n");
	for(j=0;j<row;j++){
		for(i=0;i<count;printf("%d ",a[j][i++]));
		printf("\n");
	}/////insertion short
	for(l=0;l<row;l++){
		for(i=1;i<count;i++){
			temp=a[l][i];
			for(j=i-1;j>=0;j--){
				if(temp<a[l][j])
					a[l][j+1]=a[l][j];
				else{
					a[l][j+1]=temp;
					break;
				}
			}
			if(j==-1)
				a[l][j+1]=temp;
//			for(k=0;k<count;printf("%d ",a[l][k++]));
//			printf("\n");
		}
	}
	////printing data
	printf("DATA OUT::\n");
	for(j=0;j<row;j++){
		for(i=0;i<count;printf("%d ",a[j][i++]));
		printf("\n");
	}
}
