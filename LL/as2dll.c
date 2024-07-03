#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *prev;
struct node*next;
};
void display(struct node *head);
struct node *insert_tail(struct node *head,int val);
//struct node *insert_head(struct node *head,int val);
struct node *createnode(int val);
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
struct node *temp=head;
if(temp==NULL)
{
nn->data=val;
nn->prev=NULL;
nn->next=NULL;
temp=nn;
return temp;
}
else
{
while(temp->next!=NULL)
temp=temp->next;
temp->next=nn;
nn->prev=temp;
temp=nn;
nn->next=NULL;
return head;
}
}
struct node *insert_head(struct node *head,int val)
{
struct node *nn=createnode(val);
nn->next=head;
nn->prev=NULL;
head=nn;

return head;
} 
struct node *insert_after(struct node *head,int data,int val)
{
struct node *nn,*temp=head;
nn=createnode(val);
while(temp->data!=data)
temp=temp->next;
nn->next=temp->next;
temp->next->prev=nn;
temp->next=nn;
nn->prev=temp;
return head;
}
struct node *insert_before(struct node *head,int data,int val)
{
struct node *temp=head;
struct node *nn=createnode(val);
if(data==temp->data)
head=insert_head(head,val);
while(temp->next->data!=data)
temp=temp->next;
temp->next->prev=nn;
nn->next=temp->next;
nn->prev=temp;
temp->next=nn;
return head;
}
struct node *insert_pos(struct node *head,int val,int pos){
struct node *nn,*temp=head;
nn=createnode(val);
if(pos==1){
nn->next=head;
//head->prev=nn;
//nn->prev=NULL;
if(head!=NULL)
head->prev=nn;
head=nn;
return head;
}
else
{
pos--;
while(pos!=1){
temp=temp->next;
pos--;
}
nn->next=temp->next;
temp->next=nn;
//temp->next=nn->prev;
nn->prev=temp;
}
return head;
}
struct node *delete_head(struct node *head)
{
struct node *temp=head;
head=temp->next;
head->prev=NULL;
free(temp);
return head;
}
struct node *delete_tail(struct node *head)
{
struct node *temp=head;
while(temp->next->next!=NULL)
temp=temp->next;
free(temp->next);
temp->next=NULL;
return head;
}
struct node *delete_element(struct node *head,int data)
{
struct node *temp=head;
while(temp->next->data!=data)
temp=temp->next;
struct node *p=temp->next->next;
free(temp->next);
temp->next=p;
temp->next->prev=temp;
return head;
}
struct node *rev_list(struct node *head)
{
struct node *temp=head;
struct node *current=NULL;
while(temp!=NULL)
{
current=temp->prev;
temp->prev=temp->next;
temp->next=current;
temp=temp->prev;
}
if(current!=NULL)
head=current->prev;
return head;
}
int count(struct node *head)
{
int c=0;
struct node *temp=head;
while(temp!=NULL)
{
c++;
temp=temp->next;
}
printf("no. of nodes are:%d \n",c);
}
int search(struct node *head,int data)
{
int t=0;
struct node *temp=head;
while(temp->next!=NULL&&temp->data!=data)
{
t++;
temp=temp->next;
}
if(t==0)
printf("NO\n");
else
printf("YES");
}
void display(struct node *head)
{
struct node *temp=head;
while(temp!=NULL)
{
printf("%d\t",temp->data);
temp=temp->next;
}
printf("\n");
}

int main(){
struct node *head=NULL;
head=insert_tail(head,1);
head=insert_tail(head,2);
head=insert_tail(head,3);
head=insert_head(head,4);
display(head);
head=insert_after(head,2,7);
display(head);
head=insert_before(head,2,9);
display(head);
head=insert_pos(head,11,6);
display(head);
head=delete_head(head);
display(head);
head=delete_tail(head);
display(head);
head=delete_element(head,7);
display(head);
head=rev_list(head);
display(head);
count(head);
search(head,1);
}

