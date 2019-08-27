#include<stdio.h>
/*Algorithm
Insertion_sort(A)
{
  for j=2 to A.length
   key=A[j];
  Insert A[j] into the sprted sequence A[i,j-1]
  i=j-1;
  while (i>0 and A[i]>key)
  {
   A[i+1]=a[i];
   i=i-1;
  }
 }A[i+1]=key
*/int main()
{
  int n, array[1000], i, d, t;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
 
  for (i = 1 ; i <= n - 1; i++) {
    d = i;
 
    while ( d > 0 && array[d-1] > array[d]) {
      t          = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;
 
      d--;
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (i = 0; i <= n - 1; i++) {
    printf("%d\n", array[i]);
  }
 
  return 0;
}
