#include <stdio.h>

int main(void) {
   int A[10000], size, indexmax;
   int i, j, temp, count = 0;
   scanf_s("%d", &size);

   for (i = 0;i < size;i++) {
      scanf_s("%d", &A[i]);
   }

   for (i = size - 1;i > 0;i--) {
      for (j = 0;j < i;j++) {
         if (A[j] > A[j+1]) {
            temp = A[j];
            A[j] = A[j+1];
            A[j+1] = temp;
            count++;
         }
      }
   
   }
   
   printf("%d", count);
   system("pause");
   return 0;
}
