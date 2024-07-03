#include<stdio.h>
void swap(int *a,int *b)
{
int t=*a;
*a=*b;
*b=t;
}

void heapify(int a[],int n)
{
for(int j=1;j<n;j++)
{
int c,p;
for(c=j;c>0;c=p)
{
p=(c-1)/2;
if(a[p]<a[c])
swap(&a[p],&a[c]);
}}
}
void heapsort(int a[],int n)
{
heapify(a,n);
for(int i=n-1;i>=0;i--){
swap(&a[0],&a[i]);
heapify(a,i);
}
}
int main()
{
/*int a[]={6,5,3,1,8,7,2,4};
int n=sizeof(a)/sizeof(a[0]);*/
int n,i;
printf("enter n:");
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
heapsort(a,n);
for(int i=0;i<n;i++)
printf("%d ",a[i]);
}
