#include <stdio.h>

int calcAge(currentMonth, currentDay, currentYear, birthMonth, birthDay, birthYear);
int printAge(age);
int main(void) {
	int currentMonth;
	int currentDay;
	int currentYear;
	int birthMonth;
	int birthDay;
	int birthYear;

	printf("Enter the current date in the format mm,dd,yy\n");
	scanf_s("%d %d %d", &currentMonth, &currentDay, &currentYear);

	printf("Enter your birth date in the format mm,dd,yy\n");
	scanf_s("%d %d %d", &birthMonth, &birthDay, &birthYear);

	calcAge(currentMonth, currentDay, currentYear, birthMonth, birthDay, birthYear);

	return 0;
}

int calAge(currentMonth, currentDay, currentYear, birthMonth, birthDay, birthYear) {
	int age = 0;

	while (birthYear <= currentYear) {
		birthYear = birthYear + 1;
		age = age + 1;
	}

	printAge(age);

	return age;
}

int printAge(age) {
	printf("You are %d years old\n", age);

	return 0;
}