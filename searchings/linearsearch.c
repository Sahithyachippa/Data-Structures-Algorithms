#include<stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int key;
printf("enter the element to be searched:\n");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
break;
}
if(i<n)
printf("key is found at index %d",i);
else
printf("key not found");
return 0;

}
