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
int pos=i;
for(j=i+1;j<n;j++)
{
if(a[j]>a[pos])
pos=j;
}
if(pos!=i)
{
t=a[i];
a[i]=a[pos];
a[pos]=t;
}
}
printf("sorted elements are:\n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
