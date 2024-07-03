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
void delete_ll(struct node *head)
{
struct node *temp=head;
while(temp!=NULL)
{
temp=temp->next;
free(head);
head=temp;
}
if(head==NULL)
printf("deleted successfully\n");
}

int main()
{
struct node *head;
head=createnode(1);
head->next=createnode(2);
head->next->next=createnode(3);
delete_ll(head);
}
