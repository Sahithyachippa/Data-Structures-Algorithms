#include<stdio.h>
#include<stdlib.h>
void push1();
void push2();
int pop1();
int pop2();
void enq();
void deq();
void display();
void create();
int s1[100];
int s2[100];
int top1=-1,top2=-1;
int count=0;
void main()
{
create();
enq();
enq();
enq();
enq();
enq();
display();
deq();
deq();
display();
}
void create()
{
top1=top2=-1;
}
void push1(int data)
{
s1[++top1]=data;
}
int pop1()
{
return(s1[top1--]);
}
void push2(int data)
{
s2[++top2]=data;
}
int pop2()
{
return(s2[top2--]);
}
void enq()
{
int data,i;
printf("enter data:\n");
scanf("%d",&data);
push1(data);
count++;
}
void deq()
{
int i;
for(i=0;i<=count;i++)
{
push2(pop1());
}
pop2();
count--;
for(i=0;i<=count;i++)
{
push1(pop2());
}
}
void display()
{
int i;
for(i=0;i<=top1;i++)
{
printf("%d",s1[i]);
}
printf("\n");
}
