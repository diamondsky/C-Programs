#include <stdio.h>
#include <stdbool.h>

int numRead(num);
int main() {
	numRead();

	return 0;
}

int numRead(num) {
	int total = 0;
	int count = 0;
	int avg = 0;
	int lrg = 0;
	int smll = 100000;
	bool TF1;
	bool TF2;

	while (num != -1) {
		printf("Enter an integer.");
		scanf_s("%d", &num);

		total = total + num;
		count = count + 1;

		if (num > lrg) {
			lrg = num;
		}
		if (num < smll && num != -1) {
			smll = num;
		}
		if (num < 20) {
			TF1 = true;
		}
		if (num <= 10 || num >= 90) {
			TF2 = false;
		}
	}

//A	
	avg = total / count;
	printf("\nThe average was: %d\n", avg);

//B
	printf("The largest number was: %d\n", lrg);
	printf("The smallest number was: %d\n", smll);

//C
	printf("Some of the numbers were less than 20: %d\n", TF1);

//D
	printf("Some of the numbers were between 10 and 90: %d\n", TF2);

	return 0;
}//end numRead
