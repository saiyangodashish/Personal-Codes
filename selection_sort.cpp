#include<iostream> 
using namespace std; 

void selectionSort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
         if (a[j] < a[min])
            min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}
int main() {
   int a[100];
   int n;
   int i;
   cout<<"\nEnter the range of array: ";
   cin>>n;
   for(int i=0;i<n;i++){
   	cout<<"\n Enter the "<<i+1<<" element: ";
   	cin>>a[i];
   }
   selectionSort(a, n);
   printf("\nSorted array is: \n");
   for (i = 0; i < n; i++)
   cout<< a[i] <<" ";909
   return 0;
}
