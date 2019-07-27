#include <stdio.h>

int main(void)
{
	int mins = 0;
	int remainder;
	int hours;

	printf("Input the total number of minutes.");
	scanf_s("%d", &mins);

	hours = mins / 60;
	remainder = mins % 60;

	printf("The computed time is %d hours and %d mins.\n", hours, remainder);

	return 0;
}
