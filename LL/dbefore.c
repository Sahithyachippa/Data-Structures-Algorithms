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
struct node *d_before(struct node *head,int pos)
{
struct node *temp=head;
if(pos==1)
{
printf("cant delete\n");
return head;
}
else if(pos==2)
{
struct node *x=head;
head=head->next;
free(x);
return head;
}
else
pos=pos-2;
while(pos!=1){
temp=temp->next;
pos--;
}
struct node *curr=temp->next->next;
free(temp->next);
temp->next=curr;
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
head=createnode(10);
head->next=createnode(20);
head->next->next=createnode(30);
head->next->next->next=createnode(4);
head=d_before(head,3);
display(head);
}
