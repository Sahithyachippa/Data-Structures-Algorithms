#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
int top=-1;
char stack[MAX];
void push(char);
char pop();
int isEmpty();
int isFull();
int check_bal(char *);
int match_char(char,char);
int main()
{
int ex[MAX];
int bal;
printf("enter expression\n");
//scanf("%s",ex);
gets(ex);
bal=check_bal(ex);
if(bal==1)
printf("valid expression\n");
else
printf("invalid expression\n");
return 0;
}
int check_bal(char *s)
{
char t;
int i;
for(i=0;i<strlen(s);i++)
{
if(s[i]=='('||s[i]=='{'||s[i]=='[')
push(s[i]);
if(s[i]==')'||s[i]=='}'||s[i]==']')
{
if(isEmpty()){
printf("right braces are more than left braces\n");
return 0;
}
else{
t=pop();
if(!match_char(t,s[i]))
{
printf("mismatched braces\n");
return 0;
}
}
}
}
if(isEmpty())
{
printf("well balanced\n");
return 1;
}
else
{
printf("left brackets are more than right brackets\n");
return 0;
}
}
void push(char c)
{
if(isFull())
{
printf("stack overflow\n");
exit(1);}
top++;
stack[top]=c;
}
char pop()
{
char c;
if(isEmpty())
{
printf("stack underflow\n");
exit(1);
}
c=stack[top];
top--;
return c;
}
int isEmpty()
{
if(top==-1)
return 1;
else
return 0;
}
int isFull()
{
if(top==MAX-1)
return 1;
else
return 0;
}
int match_char(char a,char b)
{
if(a=='('&&b==')')
return 1;
if(a=='{'&&b=='}')
return 1;
if(a=='['&&b==']')
return 1;
return 0;
}
