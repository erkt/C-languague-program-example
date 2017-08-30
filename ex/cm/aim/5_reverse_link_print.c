#include<stdio.h>
typedef struct st{
int n;
struct st *next;
}ST;
ST *hptr;
void add();
void print();
main(){
char c;
do{
add();
scanf(" %c",&c);
}while(c=='y');
print();
}
void add(){
ST *new=malloc(sizeof(ST));
static ST *last;
scanf("%d",&new->n);
if(!hptr){
hptr=new;
new->next=0;
last=new;
}
else{
last->next=new;
new->next=0;
last=new;
}
}
void print(){
ST *temp,*last;
temp=last=hptr;
int i=0,j;
while(hptr){
i++;
hptr=hptr->next;
}
printf("%d\n",i);
for(i;i>0;i--){
temp=last;
for(j=0;j<i-1;j++)
temp=temp->next;
printf("%d--",temp->n);
}
}

