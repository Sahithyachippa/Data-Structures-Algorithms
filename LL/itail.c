#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *createnode(int val);
void insert_tail(int val);
void display(struct node *head);
struct node *head;
struct node *createnode(int val)
{
struct node *nn;
nn=(struct node *)malloc(sizeof(struct node));
nn->data=val;
nn->next=NULL;
return nn;
}
void insert_tail(int val)
{
struct node *nn,*temp;
nn=createnode(val);
if(head==NULL)
head=nn;
else
{
temp=head;
while(temp->next!=NULL)
temp=temp->next;
temp->next=nn;}
}
void display(struct node *head)
{
if(head==NULL)
printf("list is empty\n");
while(head!=NULL)
{
printf("%d\t",head->data);
head=head->next;
}
}
int main()
{
int i,a,k;
printf("no. of elements\n");
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d",&k);
insert_tail(k);
}
display(head);
}
