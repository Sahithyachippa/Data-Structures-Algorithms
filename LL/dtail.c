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
struct node *d_tail(struct node *head)
{
struct node *nn;
struct node *temp=head;
while(temp->next->next!=NULL)
temp=temp->next;
free(temp->next);
temp->next=NULL;
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
head=d_tail(head);
display(head);
}
