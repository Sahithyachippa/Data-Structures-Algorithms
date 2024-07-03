#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int Q[MAX];
int f=-1;
int r=-1;
void enq(int x)
{
if((r+1)%MAX==f)
printf("q is full\n");
else if(f==-1&&r==-1)
{
f=r=0;
Q[r]=x;
}
else
{
r=(r+1)%MAX;
Q[r]=x;
}
}
void deq()
{
if((r+1)%MAX==f)
printf("q is emptyy\n");
else if(f==r)
f=r=-1;
else
{
f=(f+1)%MAX;
}
}
void display()
{
if(f==-1&&r==-1)
printf("empty q");
int i=f;
while(i<=r)
{
printf("%d",Q[i]);
i=(i+1)%MAX;
}
printf("\n");
}
int main()
{
enq(1);
enq(2);
enq(3);
enq(4);
enq(5);
display();
deq();
display();
enq(6);
display();
deq();
display();
}


