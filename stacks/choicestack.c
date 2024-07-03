#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack_arr[MAX];
int top=-1;
int isFull()
{
if(top==MAX-1)
return 1;
else
return 0;
}
int isEmpty()
{
if(top==-1)
return 1;
else
return 0;
}
void push(int data)
{
if(isFull())
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
if(isEmpty())
{
printf("stack is underflow\n");
exit(1);
}
val=stack_arr[top];
top=top-1;
return val;
}
int peek()
{
if(isEmpty())
{
printf("stack is underflow\n");
exit(1);
}
return stack_arr[top];
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
//top=top-1;

printf("\n");
}
int main()
{
int choice,data;
push(1);
push(2);
push(3);
push(4);
data=pop();
data=pop();
print();
while(1)
{
printf("\n");
printf("1.Push\n");
printf("2.Pop\n");
printf("3.Print the top element\n");
printf("4.Print all elements of stack\n");
printf("5.Quit\n");
printf("please enter your choice:");
scanf("%d",&choice);
switch(choice)
{
  int n;
  case 1:
  printf("enter no. of elements to be pushed:");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  scanf("%d",&data);
  break;
  case 2:
  data=pop();
  printf("deleted element is %d",data);
  break;
  case 3:
  printf("top most element is %d",peek());
  break;
  case 4:
  print();
  break;
  case 5:
  exit(1);
default:
printf("wrong choice \n");
}
}
return 0;
}
