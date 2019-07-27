#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//float atof(string);
double coupon(double total);

int main() {
	double price;
	char answer[2];
	double total = 0;

	printf("Do you want to scan an item? Imput yes or no.\n");
	scanf_s("%s", answer, sizeof(answer));

	while ((strcmp(answer, "yes"))!= 0) {
		strcmp(answer, "yes");
		printf("Enter the product price. Imput yes or no to scan another item.\n");
		scanf_s("%lf", &price);
		total = total + price;
		scanf_s("%s", answer, sizeof(answer));
	}
	printf("Your total before discounts and tax is %.2lf.\n", total);

	coupon(total);

	printf("Your total is %.2lf.\n", total);
}//end main

double coupon(double total) {
	double discount = 0;
	char answer[2] = "no";
	printf("Do you have a coupon? Imput yes or non");
	scanf_s("%s", answer, sizeof(answer));

	strcmp(answer, "yes");

	if ((strcmp(answer, "yes")) != 0) {
		printf("Enter the coupon discount in decimal form.\n");
		scanf_s("%lf", &discount);
		total = total - ((total * discount) + (total * 0.06));
		printf("Your discount is %.2lf.\n", discount * 100);
	}
	else {
		total = total + (total * 0.06);
	}
	return total;
}//end coupon

