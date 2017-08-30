#include<stdio.h>
      main()
      {
		int i,j,c1=0,c2=0;
		for(i=0;i<10;i++,c1++)
		for(j=0;j<20;j++,c1++);
	
		for(i=0;i<20;i++,c2++)
		for(j=0;j<10;j++,c2++);
		printf("c1=%d c2=%d\n",c1,c2);
	
		if(c1==c2)
		printf("c1==c2\n");
		else if(c1>c2)
		printf("c1>c2\n");
		else if(c1<c2)
		printf("c1<c2\n");
		else
		printf("not \n");
     }

