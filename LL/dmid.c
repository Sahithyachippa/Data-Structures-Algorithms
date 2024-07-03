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
struct node *d_mid(struct node *head)
{
struct node *temp=head;
int len=count(head);
printf("no. of elements are %d\n",len);
int mid=len/2;
while(mid!=1){
temp=temp->next;
mid--;}
struct node *c=temp->next->next;
free(temp->next);
temp->next=c;
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
int c;
struct node *head;
head=createnode(1);
head->next=createnode(2);
head->next->next=createnode(10);
head->next->next->next=createnode(4);
//head->next->next->next->next=createnode(5);
d_mid(head);
display(head);
}
