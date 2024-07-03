#include<stdio.h>
#include<stdio.h>
#define MAX 5
int t=0;
int x,i;
int rear=-1;
int front=0;
int q[MAX];
void addrear(int data)
{
if(t==MAX)
printf("queue is full\n");
else
{
rear=(rear+1)%MAX;
q[rear]=data;
t=t+1;
}
}
int deleterear()
{
if(t==0)
printf("q is empty\n");
else
{
if(rear==-1)
rear=MAX-1;
printf("delete rear ele is : %d\n",q[rear]);
rear=rear-1;
t=t-1;
}
}
void addfront(int data)
{
if(t==MAX)
printf("q is full\n");
else
{
if(front==0)
front=front-1;
else
{

q[front]=data;
t=t+1;
}
}
}
int deletefront()
{
if(t==0)
printf("q is  empty\n");
else
{
printf("deleted element is %d\n",q[front]);
front=(front+1)%MAX;
t=t-1;
}
}
 void display()
{
if(t==0)
printf("empty q\n");
else
{
x=front;
for(i=0;i<=t;i++)
{
printf("%d",q[x]);
x=(x+1)%MAX;
}
printf("\n");
}
}
int main()
{
addrear(1);
addrear(3);
addrear(4);
addrear(5);
addrear(6);
display();
deleterear();
display();
addfront(2);
display();
deletefront();
display();
return 0;
}
