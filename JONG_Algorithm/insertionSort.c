#include <stdio.h>

int main(void) {
	int A[10000], size,loc, newItem;
	int i, j, temp, count = 0;
	scanf_s("%d", &size);

	for (i = 0;i < size;i++) {
		scanf_s("%d", &A[i]);
	}

	for (i = 1;i < size;i++) {
		loc = i - 1;
		newItem = A[i];
		while (loc >= 0 && newItem < A[loc]) {
			A[loc + 1] = A[loc];
			loc--;
			count++;
		}
		A[loc + 1] = newItem;
		count++;
	}
	for (i = 0;i < size; i++) {
		printf("%d\n", A[i]);
	}
	printf("%d", count);
	system("pause");
	return 0;
}
