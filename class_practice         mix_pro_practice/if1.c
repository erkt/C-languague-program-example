
///scan ch from the user display that char & its ASCII nu if small  if not small then say propar input enter
#include<stdio.h>
main()
{
char ch;
abc:printf("Enter the Char.....\n");
scanf("%c",&ch);
if(ch>=97 && ch<=122)
{
printf("ch...%c and it's ASCII...%d\n",ch,ch);
}
else
{
goto abc;
}
printf("thanks.....\n");
}
