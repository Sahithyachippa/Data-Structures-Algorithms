#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int q[MAX];
int r=-1,f=0,t=0,n,i,x;
void add_rear(int data)
{
if(t==MAX)
{
printf("q is full\n");
}
else
{
r=(r+1)%MAX;
q[r]=data;
t=t+1;
}
}
void delete_rear()
{
if(t==0)
printf("q is empty\n");
else
{
if(r==-1)
{
r=MAX-1;
}
//printf("deleting ele is %d",q[r]);
r=r-1;
t=t-1;
}
}
void add_front(int data)
{
if(t==MAX)
{
printf("q is full\n");
}
else
{
if(f==0)
{
f=MAX-1;
}
else
{
f=f-1;
}
q[f]=data;
t=t+1;
}
}
void delete_front()
{
if(t==0)
printf("q is empty\n");
else
{
//printf("deleting ele is %d",q[r]);
f=(f+1)%MAX;
t=t-1;
}
}
void display()
{
if(t==0)
printf("q is empty\n");
else
{
x=f;
for(i=1;i<=t;i++)
{
printf("%d",q[x]);
x=(x+1)%MAX;
}
printf("\n");
}
}
int main()
{
add_front(1);
add_front(2);
add_front(3);
display();
add_rear(4);
add_rear(6);
add_rear(5);
display();
delete_front();
delete_front();
display();
delete_rear();
display();
}
