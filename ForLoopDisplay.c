#include <stdio.h>

int main(void) {
	int height;
	int width;

	printf("Enter the number of rows you'd like.\n");
	scanf_s("%d", &height);
	printf("Enter the number of columns you'd like.\n");
	scanf_s("%d", &width);

	for (int x = 1; x <= height; x++)
	{
		for (int y = 1; y <= width; y++)
			printf("*");

		printf("\n");
	}

	return 0;
}