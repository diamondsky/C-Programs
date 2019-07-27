#include <stdio.h>

int main(void)
{
	float num1;
	float num2;
	float total;

	printf("Enter two numbers.\n");
	scanf_s("%f %f", &num1, &num2);

	total = num1 * num2;

	printf("The product of the two numbers is: %.2f\n", total);

	return 0;
}