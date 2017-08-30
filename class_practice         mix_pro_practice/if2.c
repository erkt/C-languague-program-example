
///scan ch from the user display that char & its ASCII nu if small  if not small then say propar input enter
//small to big also print
#include<stdio.h>
main()
{
char ch;
printf("Enter the Char.....\n");
scanf("%c",&ch);
if(ch>=97 && ch<=122)
{
// ch =ch-32;
printf("ch...%c and it's ASCII...%d  small\n",ch,ch);
}
else if (ch>=65 && ch<=90)
{
printf("ch....%c and it's ASCII...%d    big \n",ch,ch);
}
else if (ch>='0' && ch<='9')
{
printf("ch....%c and it's ASCII...%d    digit\n",ch,ch);
}
else
{
printf("oout of small big and digit....\n");
}
printf("thanks.....\n");
}
