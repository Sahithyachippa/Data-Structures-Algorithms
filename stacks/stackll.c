#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *top=NULL;
struct node *createnode(int ele)
{
struct node *nn;
nn=(struct node*)malloc(sizeof(struct node));
nn->data=ele;
nn->next=NULL;
return nn;
}
void push(int ele)
{
struct node *nn;
nn=createnode(ele);
nn->next=top;
top=nn;
}
int pop()
{
struct node *temp=top;
if(temp==NULL)
{
printf("stack underflow\n");
}
top=top->next;
free(temp);
}
void display()
{
struct node *temp=top;
if(temp==NULL)
{
printf("stack is enmpty\n");
return;
}
while(temp!=NULL){
printf("%d\n",temp->data);
temp=temp->next;
}
printf("\n");
}
int main()
{
push(8);
push(7);
push(5);
display();
pop();
display();
push(3);
display();
pop();
display();
}

