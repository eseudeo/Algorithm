#include <stdio.h>

void mergeSort(int A[], int p, int r);
void merge(int A[], int p, int q, int r);
int count=0;
int main() {

	int A[10000], size;
	int i;
	scanf_s("%d", &size);

	for (i = 0;i < size;i++) {
		scanf_s("%d", &A[i]);
	}

	mergeSort(A, 0, size-1);

	printf("\n정렬 후\n");
	for (i = 0; i < size; i++) {
		printf("%d ", A[i]);
	}
	printf("%d", count);
	system("pause");
	return 0;
}

void mergeSort(int A[], int p, int r) {
	int q = (p + r) / 2;
	if (p < r) {
		mergeSort(A, p, q);
		mergeSort(A, q + 1, r);
		merge(A, p, q, r);
	}
}

void merge(int A[], int p, int q, int r) {
	int i = p;
	int j = q + 1;
	int t = 1;
	int tmp[10000];

	while (i <= q && j <= r) {
		if (A[i] < A[j]) {
			tmp[t++] = A[i++];
			count++;
		}
		else
		{
			tmp[t++] = A[j++];	
			count ++;
		}

	}
	while (i <= q) {	
		tmp[t++] = A[i++];
	}
	while (j <= r) {
		tmp[t++] = A[j++];
	}
	i = p;
	t = 1;
	while (i <= r) {
		A[i++] = tmp[t++];
	}
}
