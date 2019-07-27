#include <stdio.h>

int main()
{
	char character;

	printf("Enter a character.\n");
	scanf_s("%c", &character);

	printf("ASCII value: %d\n", character);
	return 0;
}