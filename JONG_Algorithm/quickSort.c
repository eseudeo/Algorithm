#include <stdio.h>

void quickSort(int A[], int p, int r);
int partition(int A[], int p, int r);
int count = 0;
int main() {

	int A[10000], size;
	int i;
	scanf_s("%d", &size);

	for (i = 0;i < size;i++) {
		scanf_s("%d", &A[i]);
	}

	quickSort(A, 0, size - 1);

	printf("\n정렬 후\n");

	for (i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf("%d", count);

	system("pause");
	return 0;
}

void quickSort(int A[], int p, int r) {
	int q;
	if (p < r) {
		q = partition(A,p,r);
		quickSort(A, p, q - 1);
		quickSort(A, q + 1, r);
		count++;
	}
}

int partition(int A[], int p, int r) {
	int pivot = A[r];
	int i = p - 1;
	int j;
	int tmp;

	for (j = p;j <= r - 1;j++) {
		if (A[j] <= pivot) {
			i++;
			tmp = A[i];
			A[i] = A[j];	
			A[j] = tmp;
			count++;
		}
	}

	tmp = A[i + 1];
	A[i + 1] = A[r];
	A[r] = tmp;
	return i + 1;
}
