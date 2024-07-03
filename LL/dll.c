#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *prev;
struct node*next;
};
void display(struct node *head);
struct node *insert_tail(struct node *head,int val);
struct node *insert_head(struct node *head,int val);
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
struct node *insert_tail(struct node *head,int val)
{
struct node *nn=createnode(val);
struct node*temp=head;
while(temp->next!=NULL)
temp=temp->next;
temp->next=nn;
nn->prev=temp;
temp=nn;
nn->next=NULL;
return head;
}
struct node *insert_head(struct node *head,int val)
{
struct node *nn=createnode(val);
//struct node *temp=head;
nn->next=head;
nn->prev=NULL;
nn=head;

return head;
}
void display(struct node *head)
{
struct node *temp=head;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
}
int main(){
struct node *head=NULL;
head=insert_tail(head,1);
head=insert_tail(head,2);
head=insert_tail(head,3);
head=insert_head(head,4);
display(head);
}

