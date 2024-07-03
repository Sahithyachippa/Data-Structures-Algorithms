#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int Q[MAX];
int f=-1;
int r=-1;
void enq(int x)
{
if(r==MAX-1)
printf("q is full\n");
else if(f==-1&&r==-1)
{
f=r=0;
Q[r]=x;
}
else
{
r++;
Q[r]=x;
}
}
void deq()
{
if(f==-1&&r==-1)
printf("q is underfloe\n");
else if(f==r)
f=r=-1;
else
{
//printf("dequed ele is %d",Q[f]);
f++;
}
}
/*void display()
{
if(f==-1&&r==-1)
printf("empty q");
int i=f;
while(i!=r+1)
{
printf("%d",Q[i]);
i++;
}
printf("\n");
}
/*void peek()
{
if(f==-1&&r==-1)
printf("q is empty\n");
else
{
printf("peek is %d \n",Q[f]);
}
}*/
void display()
{
/*for(int i=r;i>=f;i++)
{
printf("%d ",Q[i]);
}
*/int i=r;
while(i>=f)
{
printf("%d ",Q[i]);
i--;
}
}
int main()
{
enq(1);
enq(2);
enq(3);
enq(4);
//display();
//peek();
deq();
//display();
enq(6);
enq(7);
enq(8);
enq(9);
//display();
deq();
//deq();
display();
}


