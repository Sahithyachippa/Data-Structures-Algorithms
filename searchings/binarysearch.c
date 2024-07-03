#include<stdio.h>
int binarysearch(int a[],int l,int h,int x)
{
if(h>=l)
{
int mid=l+(h-l)/2;
if(a[mid]==x)
return mid;
else if(a[mid]>x)
return binarysearch(a,l,mid-1,x);
else
return binarysearch(a,mid+1,h,x);
}
return -1;
}
int main()
{
int n,i,j,t;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int x;
printf("enter the element to be searched;\n");
scanf("%d",&x);

int res=binarysearch(a ,0,n-1,x);
if(res==-1)
printf("element  not present\n");
else
printf("element is at index %d",res);
}
