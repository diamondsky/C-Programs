#include <stdio.h>

int main(void)
{
	int num1;
	int num2;
	int quotient;
	int remainder;


	printf("Enter two numbers.\n");
	scanf_s("%d %d", &num1, &num2);

	quotient = num1 / num2;
	remainder = num1 % num2;

	printf("Quotient: %d\n", quotient);
	printf("Remainder: %d\n", remainder);

	return 0;
}