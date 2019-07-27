#include <stdio.h>

int entry();
int printValidNums(num);

int main(void) {
	int num;
	int entry(num);
	num = entry(&num);

	return 0;
} //end main

int entry() {
	int num = 0;

	while (num != -1) {
		printf("Please enter a positive even integer: \n");
		scanf_s("%d", &num);
		if (num > 0 && num % 2 == 0) {
			printValidNums(num);
		}
		else {
			printf("Entry not valid.\n");
			printf("Please enter a positive even integer: \n");
			scanf_s("%d", &num);
			if (num > 0 && num % 2 == 0) {
				printValidNums(num);
			}
		} //end if
	} //end while
	return 0;
}//end entry

int printValidNums(num) {
	printf("Your entry was: %d\n", num);
	return 0;
}//end printValidNums