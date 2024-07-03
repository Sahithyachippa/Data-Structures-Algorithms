#include<stdio.h>
#include<stdlib.h>

struct node*front=0;
struct node*rear=0;
//struct node*temp=0;

struct node{
int data;
int pr;
struct node *next;
};

struct node *createnode(int data,int p)
{
struct node *nn;
nn=malloc(sizeof(struct node));
nn->data=data;
nn->pr=p;
nn->next=NULL;
return nn;
}

void enq(int data,int p)
{
struct node*temp=0;

temp=front;
struct node*nn;
nn=createnode(data,p);
if(front==NULL||front->pr>p)
{
nn->next=front;
front=nn;
}
else
{


while(temp->next!=NULL&& temp->next->pr<p)

//while(temp->next->pr<p)
temp=temp->next;

nn->next=temp->next;
temp->next=nn;
}

}

void display()
{
//temp=front;
if(front==NULL)
printf("list is empty\n");
else
{
while(front!=NULL)
{
printf("%d\n",front->data);
front=front->next;
}
}
}
void main()
{
enq(10,4);
enq(20,5);
enq(70,3);
enq(50,6);
enq(1000,1);
display();

}



// PRIORITY ORDER LINKED LIST WORKING PERFECTLY


















