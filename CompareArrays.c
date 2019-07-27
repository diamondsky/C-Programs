#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int compareArrays(A, B);

int main() {
	int A[10];
	int B[10];

	printf("Enter 10 integers for array A:\n");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &A[i]);
	}

	printf("Enter 10 integers for array B:\n");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &B[i]);
	}

	compareArrays(A, B);

	return 0;
}

int compareArrays(int A[], int B[]) {
	bool equal;
	for (int index = 0; index < 10; index++) {
		if (A[index] != B[index]) {
			equal = 0;
			break;
		}
		else {
			equal = 1;
		}
	}
	if (equal == 0) {
		printf("Not all the elements are equal.\n");
	}
	else if ( equal == 1) {
		printf("All the elements are equal.\n");
	}
	return 0;
}