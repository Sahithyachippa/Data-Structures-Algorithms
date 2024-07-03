#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *createnode(int val);
void insert_head(int val);
void display();
struct node *head=NULL;
struct node *createnode(int val)
{
struct node *nn;
nn=(struct node *)malloc(sizeof(struct node));
nn->data=val;
nn->next=NULL;
return nn;
}
void insert_head(int val)
{
struct node *nn;
nn=createnode(val);
if(head==NULL)
{
head=nn;
}
else
{
nn->next=head;
head=nn;}
}
void display()
{
struct node *temp;
if(head==NULL)
printf("list is empty\n");
temp=head;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}}
int main()
{
int i,a,k;
printf("no. of elements\n");
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d",&k);
insert_head(k);
}
display();
}
