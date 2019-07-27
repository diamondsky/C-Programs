#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int strlen(char entry[]);
int compare(char entry[], char specialChar);

int main() {
	char entry[20];
	char specialChar;
	int count;

	printf("Choose a random character:\n");
	scanf_s("%c", &specialChar, sizeof(specialChar));

	printf("Enter a string up to 20 characters long:\n");
	scanf_s("%s", entry, sizeof(entry));

	compare(entry, specialChar);

	count = compare(entry, specialChar);

	printf("Your random character appeared %d time(s) in your string.\n", count);

	return 0;
}

int compare(char entry[], char specialChar) {
//	int length = strlen(entry);
	int count = 0;
	for (int i = 0; i < 20; i++) {
		if (entry[i] == specialChar) {
			count = count + 1;
		}//end if
	} //end for

	return count;
}