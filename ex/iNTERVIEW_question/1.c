 #include<stdio.h>
    main()
    {
		int a=2;
		if(a==2)
		{
			a=~a+2<<1;
			printf("%d\n",a);
		}	
    }
