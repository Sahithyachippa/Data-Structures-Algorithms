 #include <stdio.h>
#include <stdlib.h>
void merge(int arr[], int l,int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[n1], R[n2];
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];
	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
if (L[i] <= R[j])
{
arr[k] = L[i];
i++;
}
else
{
arr[k] = R[j];
j++;
}
k++;
	}
	while (i < n1) {
	arr[k] = L[i];
	i++;
	k++;
	}
	while (j < n2)
	{
	arr[k] = R[j];
	j++;
	k++;
	}
}
void ms(int arr[],int l, int r)
{
	if (l < r)
	{
	int m = l + (r - l)/2;
	ms(arr, l, m);
	ms(arr, m + 1, r);
	merge(arr, l, m, r);
	}
}
void printArray(int A[], int size)
{
int i;
for (i = 0; i < size; i++)
printf("%d ", A[i]);
printf("\n");
}
int main()
{
	int n,i;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  printf("Unsorted Array\n");
  printArray(a, n);
  ms(a, 0, n - 1);
  
  printf("Sorted array in ascending order: \n");
  printArray(a, n);
}

