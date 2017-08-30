#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct st{
	char c[20];
	float f;
	struct st *next;
}st;
FILE *fp;
int end(st **ptr)
{
	static st *last;
	st *new=(st *)malloc(sizeof(st));
	printf("Name::");
	scanf(" %[^\n]",new->c);
	printf("Marks::");
	scanf("%f",&new->f);
	if(*ptr==NULL)
	{
		new->next=*ptr;
		*ptr=new;
		last=new;
	}	
	else
	{
		new->next=last->next;
		last->next=new;
		last=new;
	}
}
int display(st *ptr)
{
	while(ptr)
	{
		printf("name::%s\tMarks::%f\n",ptr->c,ptr->f);
		ptr=ptr->next;
	}
	printf("\n");
	if(ptr==0)
	return 1;
	else
	 return 0;
}
int rev(st**ptr)
{
	st *t,*t1=0;
	while(*ptr){
		t=t1;
		t1=*ptr;
		(*ptr)=(*ptr)->next;
		t1->next=t;
	}
	*ptr=t1;
}
int save(st *ptr,char *p)
{
	fp=fopen(p,"a+");
	if(fp==0){
		printf("File is not present..\n");
		return;
	}
	else{
		while(ptr){
			fprintf(fp,"%s    %f\n",ptr->c,ptr->f);
			ptr=ptr->next;
		}
	}
	if(ptr==0){
		fclose(fp);
		return 1;}
	else
		return 0;
}
int sort(st **ptr,char *p)
{
	char ch;
	int i,op,count=0; 
	st extra,*new;
	printf("do you want to sorting on file or temp. (Y/N)\n");
	scanf(" %c",&ch);
	if((ch=='y')||(ch=='Y')){
	fp=fopen(p,"r");
	if(fp==0){
	printf("file is not present..\n");
	return 0;
	}
	else{
		
		while((i=fscanf(fp,"%s  %f",extra.c,&extra.f))!=EOF){
			new=(st*)malloc(sizeof(st));
			strcpy(	new->c,extra.c);
			new->f=extra.f;
			if(*ptr==0){
				new->next=*ptr;
				*ptr=new;}
			else{
				st *last=*ptr;
				while(last->next)	
					last=last->next;
				new->next=last->next;
				last->next=new;
			}
			count+=1;
		}
		printf("Enter option sorting\n \t1)name.\n \t2)marks.\n");
		scanf("%d",&op);
		if(op==1){
		st *dupli=(*ptr);
		int i,j;
		for(i=0;i<count-1;i++)
			for(j=0;j<count-1-i;j++)
				if((stringcmp(dupli->c,dupli->next->c))>0){
					printf("--\n");
					st ext,*t;
					ext=*dupli;
					*dupli=*(dupli->next);
					*(dupli->next)=ext;
					t=dupli;
					dupli=dupli->next;
					dupli->next=t;	
				}
		}
		if(i==EOF)
		printf("LINK IS PROPER CREATED ......\n");
		else
		printf("data can't found..\n");
	}
	display(*ptr);
	}	
}
int stringcmp(char *p,char *q){
	int i;
	for(i=0;p[i];i++)
		if(p[i]!=q[i])
			break;
	if(p[i]<q[i])
		return 1;
	else if(p[i]>q[i])
		return -1;
	else
		return 0;
}
int filedata(char *p){
	FILE *fp;
	char ch;
	if((fp=fopen(p,"r"))<0){
		perror("FOPEN : ");
		return;
	}
	while((ch=fgetc(fp))!=EOF)
		printf("%c",ch);
	if(ch==EOF)
		return 1;
	else
		return -1;
}
