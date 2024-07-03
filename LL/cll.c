#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *createnode(int val)
{
struct node *nn;
nn=malloc(sizeof(struct node));
nn->data=val;
nn->next=NULL;
return nn;
}

void display(struct node *head)
{
struct node *temp=head;
while(temp->next!=head)
{
printf("%d\t",temp->data);
temp=temp->next;
}
printf("%d",temp->data);
}
int main(){
struct node *head;
head=createnode(10);
head->next=createnode(20);
head->next->next=createnode(30);
display(head);
}

