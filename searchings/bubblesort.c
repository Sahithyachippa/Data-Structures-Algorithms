#include<stdio.h>
int main()
{
int n,i,j,t;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
int s=0;
for(j=0;j<n-1-i;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
s=1;
}
}
if(s==0)
break;
}
printf("sorted elements are:\n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
