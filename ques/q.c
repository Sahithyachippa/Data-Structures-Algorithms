#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int rear=-1;
int front=-1;
int q[MAX];


void prin()
{
int i;
if(rear==-1)
printf("empty\n");
else
{
for(i=front;i<=rear;i++)
{
printf("%d\n",q[i]);
}
}
}
void enq(int ele)
{
if(front==0 && rear==MAX-1)
printf("queue is full\n");
else if(front==-1&& rear==-1)
{
front=0;
rear=0;
q[rear]=ele;
}
else 
{
rear=rear+1;
q[rear]=ele;
//printf("%d\n",q[rear]);
}
//prin();
}

int main()
{
enq(6);
enq(10);
enq(90);
enq(56);
prin();
}



//enq perfect
