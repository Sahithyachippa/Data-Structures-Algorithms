#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int stack[MAX];
int top=-1;
int isfull()
{
if(top==MAX-1)
return 1;
else
return 0;
}
int isempty()
{
if(top==-1)
return 1;
else
return 0;
}


void push(int element)
{
if(isfull())
{printf("stack oveflow\n");
exit(1);
}
top++;
stack[top]=element;
}
int pop()
{
int val;
if(isempty())
{
printf("stack underflow\n");
exit(1);
}
val=stack[top];
top--;
return val;
}
void dec_to_binary(int num)
{
while(num!=0)
{
push(num%2);
num=num/2;
}
}
void display()
{
if(isempty())
{
printf("stack underflow\n");
exit(1);
}
while(!isempty())
{
printf("%d",pop());
}
}

int main()
{
int n;
printf("enter a decimal no.:");
scanf("%d",&n);
dec_to_binary(n);
display();
return 0;
}
