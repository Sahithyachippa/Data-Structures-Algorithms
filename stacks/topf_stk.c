#include<stdio.h>
#include<stdlib.h>
#define max 5
int stack[max];
int f=-1;
 int isempty()
{
if(f==-1)
return 1;
else
return 0;
}
int isfull()
{
if(f==max-1)
return 1;
else
return 0;
}
ispeek()
{
if(isempty())
{
printf("stack underflow\n");
exit(1);
}
return stack[0];
}
void push(int data)
{
if(isfull())
{
printf("q is full\n");
exit(1);
}
else
{
int i;
f+=1;
for(i=f;i>0;i--)
stack[i]=stack[i-1];
stack[0]=data;
}
}
int pop()
{
int i,val;
val=stack[0];
if(isempty())
{
printf("q is empty\n");
exit(1);
}
for(i=0;i<f;i++)
{
stack[i]=stack[i+1];
}
f-=1;
return val;
}
void print()
{
int i;
if(f==-1)
{
printf("empty\n");
exit(1);
}
for(i=0;i<=f;i++)
printf("%d",stack[i]);
printf("\n");
}
int main()
{
push(1);
push(2);
push(3);
push(4);
print();
data=pop();
pop();
print();
}


