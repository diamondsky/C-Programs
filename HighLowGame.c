#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int cpuSecret;
	int guess = 0;

	cpuSecret = 1 + (rand() % 20);

	printf("I am thinking of a number between 1 and 20.\n");
	scanf_s("%d", &guess);

	while (guess != cpuSecret) {
		if (guess < cpuSecret)
			printf("Your guess is too low. Try again: ");
		else if (guess > cpuSecret)
			printf("Your guess is too high. Try again: ");

	scanf_s("%d", &guess);
	} //end while
	printf("Congratulations! You did it.\n");
	return 0;
}
