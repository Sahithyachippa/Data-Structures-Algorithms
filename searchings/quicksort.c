// Quick sort in C

#include <stdio.h>
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
int partition(int a[], int low, int high) {
  int pivot = a[high];
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (a[j] <= pivot) {
      i++;
      swap(&a[i], &a[j]);
    }
  }
  swap(&a[i + 1], &a[high]);
  return (i + 1);
}

void qs(int a[], int low, int high) {
  if (low < high){
    int p = partition(a, low, high);
    qs(a, low, p - 1);
    qs(a, p + 1, high);
  }
}
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
int main() {
  int n,i;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  printf("Unsorted Array\n");
  printArray(a, n);
  qs(a, 0, n - 1);
  
  printf("Sorted array in ascending order: \n");
  printArray(a, n);
}
