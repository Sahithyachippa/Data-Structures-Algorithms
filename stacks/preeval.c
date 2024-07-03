#include<stdio.h>
#include<math.h>
#define MAX 100
int stack[MAX];
int top=-1;
int postfix_eval(char postfix[])
{
int a,b,i;
int result;
for(i=MAX-1;postfix[i]>=0;i--)
{
if(postfix[i]>'0'&&postfix[i]<'9')
push(postfix[i]-'0');
else
{
a=pop();
b=pop();
switch(postfix[i])
{
case '+':
  result=b+a;
  break;
case '-':
  result=b-a;
  break;
case '*':
  result=b*a;
  break;
  break;
case '/':
  result=b/a;
  break;
/*case '^':
  result=pow(b,a);
  break;*/
}
push(result);
}
}
return pop();
}
void push(int element)
{
if(top>=MAX-1)
{printf("stack oveflow\n");
return;
}
else
{
top=top+1;
stack[top]=element;
}
}
int pop()
{
if(top<0)
{
printf("stack underflow\n");
return 0;
}
return stack[top--];
}
int main()
{
int result;
char postfix[30];
printf("enter postfix expression:\n");
scanf("%s",postfix);
result=postfix_eval(postfix);
printf("%d\n",result);
return 0;
}
