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
for(i=0;i<n;i++)
{
int key=a[i];
int j=i-1;
while(key<a[j]&&j>=0)
{
a[j+1]=a[j];
--j;
}
a[j+1]=key;
}
printf("sorted elements are:\n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
