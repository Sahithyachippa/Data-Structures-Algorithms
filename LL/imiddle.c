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
int count(struct node *head){
struct node *temp=head;
int c=0;
while(temp!=NULL)
{
temp=temp->next;
c++;
}
return c;
}
struct node *mid(struct node *head,int val)
{
struct node *nn=createnode(val);
struct node *temp=head;
int len=count(head);
printf("no. of elements are %d\n",len);
int mid=len/2;
while(mid--)
temp=temp->next;
printf("mid element is %d\n",temp->data);
while(mid-- >1)
temp=temp->next;
nn->next=temp->next;
temp->next=nn;
display(head);
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
int c;
struct node *head;
head=createnode(1);
head->next=createnode(2);
head->next->next=createnode(10);
head->next->next->next=createnode(4);
//head->next->next->next->next=createnode(5);
mid(head,50);
}
