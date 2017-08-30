#include<stdio.h>
       main()
       {
		int i=3;
		int j;
		j=sizeof(++i + ++i + ++i);
		printf("i=%d j=%d\n",i,j);
      }
