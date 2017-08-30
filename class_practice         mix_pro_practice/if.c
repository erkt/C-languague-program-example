
///scan ch from the user display that char & its ASCII nu if small 
#include<stdio.h>
main()
{
char ch;
printf("Enter the Char.....\n");
scanf("%c",&ch);
if(ch>=97 && ch<=122)
{
printf("ch...%c and it's ASCII...%d\n",ch,ch);
}
printf("thanks.....\n");
}
