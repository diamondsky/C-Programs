#include <stdio.h>

int calcTemp(celsius);
int printTemp(celsius, fahrenheit);
int main(void) {
	int celsius;

	printf("Enter the temperature in celsius: ");
	scanf_s("%d", &celsius);

	calcTemp(celsius);

	return 0;
}

int calcTemp(celsius) {
	int fahrenheit;

	fahrenheit = 32 + (celsius * 180 / 100);

	printTemp(celsius, fahrenheit);

	return fahrenheit;
}

int printTemp(celsius, fahrenheit) {
	printf("Celsius\t\t|\tFahrenheit\n");
	printf("----------------------------------\n");
	printf("%d\t\t\t%d\n", celsius, fahrenheit);

	return 0;
}