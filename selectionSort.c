//selection sort
#include <stdio.h>

int main(void) {
	int A[10000], size, indexmax;
	int i,j,temp,count=0;
	scanf("%d", &size);

	for (i = 0;i < size;i++) {
		scanf("%d", &A[i]);
	}
	for (i = size-1;i > 0;i--) {
		indexmax = 0;
		for (j = 1;j<=i;j++) {
			if (A[indexmax] < A[j]) {
				indexmax = j;
				count++;
			}
		}
		temp = A[i];
		A[i] = A[indexmax];
		A[indexmax] = temp;
		}

	printf("%d", count);
	return 0;
}
