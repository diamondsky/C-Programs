#include <stdio.h>
#include <math.h>

int main()
{
	float inches;
	float feet;
	float yards;
	float centimeters;
	float meters;

	printf("Enter a measurement in inches");
	scanf_s("%f", &inches);

	getchar();
	feet = inches / 12;
	yards = inches / 36;
	centimeters = inches / 2.54;
	meters = inches / 39.37;

	printf("You entered: %.2f \n", inches);
	printf("The measurement converted to feet is: %.2f \n", feet);
	printf("The measurement converted to yards is: %.2f \n", yards);
	printf("The measurement converted to centimeters is: %.2f \n", centimeters);
	printf("The measurement converted to meters is: %.2f \n", meters);

	getchar();
	return 0;
}//end main