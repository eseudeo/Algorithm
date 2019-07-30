#include <stdio.h>

void heapSort(int *A, int size);
void buildHeap(int *A, int size);
void heapify(int *A, int k, int size);

int count = 0;

int main() {

   int A[10000], size;
   int i;
   scanf_s("%d", &size);

   for (i = 0;i < size;i++) {
      scanf_s("%d", &A[i]);
   }

   heapSort(A, size);

   printf("\n정렬 후\n");

   for (i = 0; i < size; i++) {
      printf("%d ", A[i]);
   }
   printf("%d", count);

   system("pause");
   return 0;
}

void heapSort(int *A, int size) {
   int i, tmp;
   buildHeap(A, size);
   for (i = size;i >= 2;i--) {
      tmp = A[1];
      A[1] = A[i];
      A[i] = tmp;
      heapify(A, 1, i - 1);
   }
}

void buildHeap(int *A, int size) {
   int i;
   for (i = size / 2; i >= 1;i--) {
      heapify(A, i, size);
   }
}

void heapify(int *A, int k, int size) {
   int left = 2 * k;
   int right = (2 * k) + 1;
   int small, tmp;

   if (right <= size) {
      if (A[left] <= A[right]) {
         small = left;
      }
      else
         small = right;
   }
   else if (left <= size) {
      samll = left;
   }

   if (A[small] < A[k]) {
      tmp = A[k];
      A[k] = A[small];
      A[small] = tmp;
      heapify(A, small, n);
   }
}
