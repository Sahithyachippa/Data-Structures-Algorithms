#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack_arr[MAX];
int top=-1;
void push(int data)
{
if(top==MAX-1)
{
printf("stack overflow\n");
return;
}
top=top+1;
stack_arr[top]=data;
}
int pop()
{
int val;
if(top==-1)
{
printf("stack is underflow\n");
exit(1);
}
val=stack_arr[top];
top=top-1;
return val;
}
void print()
{
int i;
if(top==-1)
{
printf("stack is underflow\n");
return;
}
for(i=top;i>=0;i--)
printf("%d\t",stack_arr[i]);
top=top-1;

printf("\n");
}
void printt()
{
int i;
//if(top==-1)
//{
//printf("stack is underflow\n");
//return;
//}
for(i=0;i<=top;i++)
printf("%d\t",stack_arr[i]);
//top=top-1;

printf("\n");
}

int main()
{
int data;
push(1);
push(2);
push(3);
push(4);
push(5);
//data=pop();
//data=pop();
print();
printt();
}


