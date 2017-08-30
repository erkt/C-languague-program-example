/////insert nodes at end (single link list)
#include"kt.h"
main()
{
st *hptr=0;
char ch;
do{
add(&hptr);
printf("Do you want to add another node?  (Y/N)\n");
scanf(" %c",&ch);
}while((ch=='y')||(ch=='Y'));
traverse(hptr);
}
