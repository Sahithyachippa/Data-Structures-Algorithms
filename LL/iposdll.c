#include<stdio.h>
#include<stdlib.h>
struct node *createnode(int val);
void display(struct node *head);
void insert_pos(struct node *head,int pos,int val);
struct node{
int data;
struct node *next;  
struct node *prev;
};
struct node *head;
struct node *next;
struct node *prev;
void main(){
prev=next=NULL;
head= createnode(10);
struct node *temp1=createnode(20);
head->next=temp1;
temp1->prev=head;
struct node *temp2=createnode(30);
temp1->next=temp2;
temp2->prev=temp1;
struct node *temp3=createnode(40);
temp2->next=temp3;
temp3->prev=temp2;
insert_pos(head,1,25);
display(head);
}
struct node *createnode(int val)
{
struct node *nn;
nn=(struct node*)malloc(sizeof(struct node));
nn->data=val;
nn->next=nn->prev=NULL;
return nn;
}
void display(struct node *head)
{
while(head!=NULL)
{
printf("%d\t",head->data);
head=head->next;
}

}
void insert_pos(struct node *head,int pos,int val){
struct node *nn,*temp=head;
nn=createnode(val);
if(pos==1){
nn->next=head;
//head->prev=nn;
//nn->prev=NULL;
if(head!=NULL)
{head->prev=nn;}
head=nn;
return head;
}
else
{
pos--;
while(pos!=1){
temp=temp->next;
pos--;}
nn->next=temp->next;
temp->next=nn;
//temp->next=nn->prev;
nn->prev=temp;
}
return head;
}


