#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *createnode(int val)
{
struct node *nn;
nn=(struct node *)malloc(sizeof(struct node));
nn->data=val;
nn->next=NULL;
return nn;
}
struct node *insert_before(struct node *head,int pos,int val)
{
struct node *nn;
struct node *temp=head;
nn=createnode(val);
if(pos==1)
{
nn->next=head;
head=nn;
return head;
}
pos--;
while(pos!=1)
{
temp=temp->next;
pos--;
}
nn->next=temp->next;
temp->next=nn;
return head;
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
struct node *head;
head=createnode(1);
head->next=createnode(2);
head->next->next=createnode(3);
head=insert_before(head,1,10);
display(head);
}
