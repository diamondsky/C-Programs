#include <stdio.h>

int numRead(num);
int printAvg(avg);
int main() {
	numRead();

	return 0;
}

int numRead(num) {
	int total = 0;
	int count = 0;
	int avg = 0;

	while (num != -1) {
		printf("Enter an integer.");
		scanf_s("%d", &num);

		if (num < 0) {
			printf("Your number was: %d\n", num);
		}
		else if (num % 2 == 0) {
			total = total + num;
			count = count + 1;
		}
	}

	avg = total / count;
	printAvg(avg);

	return avg;
}//end numRead

int printAvg(int avg) {
	printf("The average even integer you entered was: %d\n", avg);

	return 0;
}