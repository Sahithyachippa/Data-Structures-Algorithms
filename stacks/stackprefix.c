#include<stdio.h>
#include<string.h>
#include<math.h>

#define MAX 100
int top=-1;
char stack[MAX];
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
void reverse(char *exp)
{
int size=strlen(exp);
int j=size,i=0;
char temp[size];
temp[j--]='\0';
while(exp[i]!='\0')
{
temp[j]=exp[i];
j--;
i++;
}
strcpy(exp,temp);
}
void brackets(char *exp)
{
int I=0;
while(exp[I]!='\0')
{
if(exp[I]=='(')
exp[I]=')';
else if(exp[I]==')')
exp[I]='(';
I++;
}
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
void getpostfix(char *expression)
{
char c;
int i;
for(i=0;expression[i]!='\0';i++)
{
if(expression[i]>'0'&&expression[i]<'9')
printf("%c",expression[i]);
else if(expression[i]=='(')
push(expression[i]);
else if(expression[i]==')')
{
while((c=pop())!='(')
printf("%c",c);
}
else
{
if(getpriority(stack[top])>=getpriority(expression[i]))
printf("%c",pop());
push(expression[i]);

}
}
while(top>=0)
printf("%c",pop());
}
void infixtoprefix(char *exp)
{
int size=strlen(exp);
reverse(exp);
brackets(exp);
getpostfix(exp);
reverse(exp);
}
int main()
{
  char exp[500];
printf("enter exp:");
scanf("%s",exp);
infixtoprefix(exp);
printf("  is the prefix expressio of: ");
printf("%s\n",exp);
return 0;
}

