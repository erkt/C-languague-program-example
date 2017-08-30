#include<stdio.h>
       int square (volatile int *ptr)
       {
             return *ptr * *ptr;
       }
       void f(char *k)
       {
	 k++;
	 k[2]='m';
      }

      main()
      {
             char s[]="hello";
            f(s);
            printf("%c\n",*(s+2));
      } 
