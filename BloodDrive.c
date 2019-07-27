#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float getTotal1(float day1[]);
float getTotal2(float day2[]);
float getAverage1(float total1);
float getAverage2(float total2);

int main() {
	float day1[7];//pints per hour Day1(7 hr period)
	float day2[7];//pints per hour Day2(7 hr period)
	char weekDay1[10]; //which day?
	char weekDay2[10]; //which day?
	float total1;
	float total2;

	printf("Enter the two days of the week you'd like to average:\n");
	scanf_s("%s", weekDay1, weekDay2);

	while ((strcmp(weekDay1, "")) == (strcmp(weekDay2, ""))) {
		printf("Invalid entries. Please re-input:");
		scanf_s("%s %s", weekDay1, weekDay2);
	}

	printf("Please enter the pints per hour on Day 1:\n (Note 7 entries are required.)\n");
	for (int i = 0; i <= 7 - 1; i++) {
		scanf_s("%f", day1[i]);
	}

	printf("Please enter the pints per hour on Day 2:\n (Note 7 entries are required.)\n");
	for (int i = 0; i <= 7 - 1; i++) {
		scanf_s("%f", day2[i]);
	}

	total1 = getTotal1(day1);
	total2 = getTotal2(day2);
	printf("The average pints collected on %s was %f \n", weekDay1, getAverage1(total1));
	printf("The average pints collected on %s was %f \n", weekDay2, getAverage2(total2));

	return 0;
}

float getTotal1(float day1[]) {
	float total1 = 0;
	for (int i = 0; i <= 7 - 1; i++) {
		total1 = total1 + day1[i];
	}
	return total1;
}

float getTotal2(float day2[]) {
	float total2;
	for (int i = 0; i <= 7 - 1; i++) {
		total2 = total2 + day2[i];
	}
	return (float)total2;
}

float getAverage1(float total1) {
	float avgPints1;
	avgPints1 = total1 / 7;
	return (float)avgPints1;
}

float getAverage2(float total2) {
	float avgPints2;
	avgPints2 = total2 / 7;
	return (float)avgPints2;
}

