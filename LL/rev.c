#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *head;
struct node *createnode(int val)
{
struct node *nn;
nn=(struct node *)malloc(sizeof(struct node));
nn->data=val;
nn->next=NULL;
return nn;
}
struct node *rev(struct node *head)
{
struct node *curr=head,*temp=NULL,*prev=NULL;
while(curr!=NULL)
{
temp=curr->next;
curr->next=prev;
prev=curr;
curr=temp;
 }
return prev;
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
head=rev(head);
display(head);
}
