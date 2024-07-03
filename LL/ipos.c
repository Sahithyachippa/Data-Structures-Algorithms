#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *createnode(int val);
struct node *insert_pos(struct node *head,int pos,int val);
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
struct node *insert_pos(struct node *head,int pos,int val)
{
struct node *temp=head;
struct node *nn=createnode(val);
if(pos==1){
nn->next=head;
return nn;}
else
pos--;
while(pos!=1)
{
temp=temp->next;
pos--;}
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
insert_pos(head,2,10);,
display(head);
}
