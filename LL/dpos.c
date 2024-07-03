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
struct node *d_pos(struct node *head,int pos)
{
struct node *temp=head;
if(pos==1)
{
head=head->next;
free(temp);
return head;
}
pos--;
while(pos!=1)
{
temp=temp->next;
pos--;
}
struct node *n=temp->next->next;
free(temp->next);
temp->next=n;
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
head->next->next->next=createnode(4);
head=d_pos(head,4);
display(head);
}
