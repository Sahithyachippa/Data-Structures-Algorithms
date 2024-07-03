#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *f=NULL;
struct node *r=NULL;
void insert(struct node *head,int ele)
{
head=malloc(sizeof(struct node));
head->data=ele;
head->next=NULL;
if((f==NULL)&&(r==NULL))
f=r=head;
else
{
r->next=head;
r=head;
}
}
void delete()
{
if(f==NULL)
printf("underflow\n");
else
{
struct node *x=f;
f=f->next;
free(x);
}
}
void display()
{
if((f==NULL)&&(r==NULL))
printf("empty\n");
else
{
struct node *t=f;
while(t)
{
printf("%d ",t->data);
t=t->next;
}
}
}
int main()
{
struct node *head;
insert(head,1);
insert(head,2);
insert(head,3);
insert(head,4);
display();
delete();
delete();
printf("\n");
display();
}



