#include<stdio.h>
#include<math.h>
#define MAX 100
char stack[MAX];
int top=-1;
void push(char element)
{
if(top>=MAX-1)
{printf("stack oveflow\n");
return;}
stack[++top]=element;
}
int pop()
{
if(top<0)
{
printf("stack underflow\n");
return ' ';
}
return stack[top--];
}
int getpriority(char x)
{
if(x=='+'||x=='-')
return 1;
if(x=='*'||x=='/')
return 2;
if(x=='^')
return 3;
return 0;
}
void postfix(char infix[])
{
char c;
int i;
for(i=0;infix[i]!='\0';i++)
{
if(infix[i]>'0'&&infix[i]<'9')
printf("%c",infix[i]);
else if(infix[i]=='(')
push(infix[i]);
else if(infix[i]==')')
{
while((c=pop())!='(')
printf("%c",c);
}
else
{
if(getpriority(stack[top])>=getpriority(infix[i]))
printf("%c",pop());
push(infix[i]);

}
}
while(top>=0)
printf("%c",pop());
}

int main()
{
char infix[540];
printf("enter infix expression:\n");
scanf("%s",infix);
postfix(infix);
return 0;
}
