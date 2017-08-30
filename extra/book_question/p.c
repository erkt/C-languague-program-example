/*
   #include<stdio.h>
	char *str="char *str=%c%s%c;main(){printf(str,34,str,34);}";	
	int main()
	{
		printf(str,34,str,34);
		return 0;
	}

   #include <stdio.h>
        void f(char *k)
        {
            k++;
            k[2] = 'm';
            printf("%c\n", *k);
        }
        void main()
        {
            char s[] = "hello";
            f(s);
            printf("%s\n",s);
        }

  #include<stdio.h>
        void t1(char *q);
        main()
        {
		char *p;
		p = "abcder";
		t1(p);
        }
        void t1(char *q)
        {
		if(*q!='r')
		{
			putchar(*q);
			t1(q++);
		}
        }
	
 #include<stdio.h>
       int main()
{
       int i;
       float a=5.2;
       char *ptr;
       ptr=(char *)&a;
       for(i=0;i<=3;i++)
       printf("%d ",*ptr++);
       return 0;
}

 54) #include <stdio.h>
        void foo( int[] );
        int main()
        {
            int ary[4] = {1, 2, 3, 4};
            foo(ary);
            printf("%d ", ary[0]);
        }
        void foo(int p[4])
        {
            int i = 10;
            p = &i;
            printf("%d ", p[0]);
        }

   55) #include <stdio.h>
        void main()
        {
            int k = 5;
            int *p = &k;
            int **m  = &p;
             **m = 10;
            printf("%d%d%d\n", k, *p, **m);
        }

 56) #include <stdio.h>
        int main()
        {
            int a = 1, b = 2, c = 3;
            int *ptr1 = &a, *ptr2 = &b, *ptr3 = &c;
            int **sptr = &ptr1; 
	    printf("%d  ",**sptr);
            *sptr = ptr2;
	    printf(("%d  ",**sptr);
        }


#include <stdio.h>
        void main()
        {
            int a[3] = {1, 2, 3};
            int *p = a;
            int *r = &p;
            printf("%d\n", (**r));
        }

58)  #include <stdio.h>
        int main()
        {
            int i = 97, *p = &i;
            foo(&p);
            printf("%d ", *p);
            return 0;
        }
        void foo(int **p)
        {
            int j = 2;
            *p = &j;
            printf("%d ", **p);
        }

 59) #include <stdio.h>
        void foo(int *const *p);
        int main()
        {
            int i = 11;
            int *p = &i;
            foo(&p);
            printf("%d ", *p);
        }
        void foo(int *const *p)
        {
            int j = 10;
            *p = &j;
            printf("%d ", **p);
        }

60)   #include <stdio.h>
        void foo(int **const p);
        int main()
        {
            int i = 10;
            int *p = &i;
            foo(&p);
            printf("%d ", *p);
        }
        void foo(int **const p)
        {
            int j = 11;
            *p = &j;
            printf("%d ", **p);
        }

61)   #include <stdio.h>
        int *f();
        int main()
        {
             int *p = f();
             printf("%d\n", *p);
        } 
        int *f()
        { 
             int *j = (int*)malloc(sizeof(int));
            *j = 10;
             return j;
        }

   #include <stdio.h>
        void main()
        {
            char *a[10] = {"hi", "hello", "how"};
            int i = 0;
            for (i = 0;i < 10; i++)
            printf("%s  ", *(a[i]));
        }

  63) #include <stdio.h>
        void main()
        {
            char *a[10] = {"hi", "hello", "how"};
            int i = 0, j = 0;
            a[0] = "hey";
            for (i = 0;i < 10; i++)
            printf("%s  ", a[i]);
        }
*/
 64) #include <stdio.h>
        void main()
        {
            char *a[10] = {"hi", "hello", "how"};
            printf("%d\n", sizeof(a));
        }

  65) #include <stdio.h>
        void main()
        {
            char *a[10] = {"hi", "hello", "how"};
            printf("%d\n", sizeof(a[1]));
        }


 66) #include <stdio.h>
        int main()
        {
            char a[2][6] = {"hello", "hi"};
            printf("%s  ", *a + 1);
            return 0;
        }

67)  #include <stdio.h>
        int main()
        {
            char *a[2] = {"hello", "hi"};
            printf("%s\n", *(a + 1));
            return 0;
        }

 68) #include <stdio.h>
        int main(int argc, char *argv[])
        {
            while (argc--)
            printf("%s\n", argv[argc]);
            return 0;
        }

 69) #include <stdio.h>
        int main(int argc, char *argv[])
        {
            while (*argv++ != NULL)
            printf("%s\n", *argv);
            return 0;
        }

 70) #include <stdio.h>
        int main(int argc, char *argv[])
        {
            while (*argv  !=  NULL)
            printf("%s\n", *(argv++));

           return 0;
        }

71) 	#include<stdio.h>
	int main(int sizeofargv, char *argv[])
	{
		while(sizeofargv)
		printf(“%s  ”,argv[--sizeofargv]);
		return 0;
	} if i/p is   sample  friday tuesday sunday

72)	#include<stdio.h>
	int main()
	{
		char *str[]={“Progs”,”Do”,”Not”,”Die”,”They”,”Croak!”};
		printf(“%d  %d”,sizeof(str),strlen(str[0]));
		return 0;
	}

73)	#include<stdio.h>
	int main()
	{
		static char *s[]={“black”,”white”,”pink”,”violet”};
		char **ptr[]={s+3,s+2,s+1,s},***p;
		p = ptr;
		printf(“%s\n”,**p+1);
		return 0;
	}
	
74) 	#include<stdio.h>
	main()
	{
		char *m[]={“jan”,”feb”,”mar”};
		char d[][10] = {“sun”,”mon”,”tue”};
		printf(“%s\t”,m[1]);
		printf(“%s\t”,d[1]);
	}

75)	#include<stdio.h>
	void fun(char **);
	int main()
	{
		char *argv[]={“ab”,”cd”,”ef”,”gh”};
		fun(argv);
		return 0;
	}
	void fun(char **p)
	{
		char *t;
		t=(p+=sizeof(int))[-1];
		printf(“%s\n”,t);
	}

76)   #include <stdio.h>
        void first()
        {
            printf("first");
        }
        void second()
        {
            first();
        }
        void third()
        {
            second();
        }
        void main()
        {
            void (*ptr)();
            ptr = third;
            ptr();
        }

  77) #include <stdio.h>
        int add(int a, int b)
        {
            return a + b;
        }
        int main()
        {
            int (*fn_ptr)(int, int);
            fn_ptr = add;
            printf("The sum of two numbers is: %d\n", (int)fn_ptr(2, 3));
        }

  78) #include <stdio.h>
        int mul(int a, int b, int c)
        {
            return a * b * c;
        }
        void main()
        {
            int (*function_pointer)(int, int, int);
            function_pointer  =  mul;
            printf("The product of three numbers is:%d",
            function_pointer(2, 3, 4));
        }

 79)      #include<stdio.h>
	int fun(int (*)());
	int main()
	{
		fun(main);
		printf(“Hi\n”);
		return 0;
	}
	int fun(int (*p)())
	{
		printf(“Hello\n”);
		return 0;
	}
	
80)    #include<stdio.h>
          int main()
          {
		char *p = “Hello World”;
		printf(p);
	}



*/

/* #include <stdio.h>
        int x = 0;
        void main()
        {
            int *const ptr = &x;
            printf("%p\n", ptr);
            ptr++;
            printf("%p\n ", ptr);
        }
*/
