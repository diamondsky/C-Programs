/*Kiana Slimak*/
#include <stdio.h>
#include <stdlib.h>

int test1;
int test2;
int test3;
float score;
char grade;
void getData(int*test1, int*test2, int*test3);
float calcScore(int test1, int test2, int test3);
char calcGrade(int test2, int test3, float score);
void printResult(float score, char grade);

int main(void)
{
	getData(&test1, &test2, &test3);
	float score = calcScore(test1, test2, test3);
	char grade = calcGrade(test2, test3, score);
	printResult(grade, score);

	return 0;
} //main

void getData(int*test1, int*test2, int*test3)
{
	printf("Please enter the three test scores: ");
	scanf_s("%d %d %d", test1, test2, test3);
	return;
} //getData

float calcScore(int test1, int test2, int test3)
{
	score = (float)((test1 + test2 + test3) / 3);

	return score;
}

char calcGrade(int test2, int test3, float score)
{
	if (score >= 90)
		grade = 'A';
	else if (score >= 70 && score <= 89 && test3 > 90)
		grade = 'A';
	else if (score >= 70 && score <= 89)
		grade = 'B';
	else if (score >= 50 && score <= 69 && ((test2 + test3) / 2) > 70)
		grade = 'C';
	else if (score >= 50 && score <= 69)
		grade = 'D';
	else if (score <= 49)
		grade = 'F';

	return grade;
} //calcGrade

void printResult(float score, char grade)
{
	printf("The student's final grade is: %c\n", grade);
	printf("The student's averge percentage was: %.2f\n", score);
	return;
}//printResult