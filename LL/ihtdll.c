#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *prev;
struct node*next;
};
void display(struct node *head);
struct node *insert_tail(struct node *head,int val);
struct node *insert_head(struct node *head,int val)
{
struct node *nn=createnode(val);
nn->next=head;
if(head!=NULL)
head->prev=nn;
return nn;
}
struct node *insert_tail(struct node *head,int val)
{
struct node *nn=createnode(val);
struct node *temp=head;
while(temp->next!=NULL)
temp=temp->next;
temp->next=nn;
nn->prev=temp;
temp=nn;
nn->next=NULL;
return head;
}
struct node *head;
struct node *createnode(int val)
{
struct node *nn;
nn=(struct node *)malloc(sizeof(struct node));
nn->data=val;
nn->next=NULL;
nn->prev=NULL;
return nn;
}
void display(struct node *head)
{
struct node *temp=head;
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}
int main(){
struct node *head=NULL;
head= createnode(10);
struct node *temp1=createnode(20);
head->next=temp1;
temp1->prev=head;
struct node *temp2=createnode(30);
temp1->next=temp2;
temp2->prev=temp1;
head=insert_head(head,50);
display(head);
printf("\n");
head=insert_tail(head,60);
display(head);
}

