#include<stdio.h>


int srcm(char *d,char *s)
{
        int i;
        for(i=0;s[i];i++)
                if(d[i]!=s[i])
                        break;
        if(d[i]>s[i])
                return 1;
        else
                return 0;
}
void cp(char *d,char*s)
{
        int i;
        for(i=0;s[i];d[i]=s[i],i++);
        d[i]=s[i];
}


