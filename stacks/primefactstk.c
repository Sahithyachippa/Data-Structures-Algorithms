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
void primefact(int num)
{
int i=2;
while(num!=1)
{
while(num%i==0)
{
push(i);
num=num/i;
}
i++;
}
printf("prime fact of given no. in descending order is\n");
while(top!=-1)
{
printf("%d",pop());
printf("\n");
}
}
int main()
{
int n;
printf("enter a positive value:");
scanf("%d",&n);
primefact(n);
return 0;
}
