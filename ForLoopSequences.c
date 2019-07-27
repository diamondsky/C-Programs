#include <stdio.h>

int main(void) {

int num;
int total = 0;

//A
for (num = 6; num <= 66; num = num + 2)
	{
	printf("%d\n", num);
	}
printf("\n\n");

//B
for (num = 7; num <= 67; num = num + 2)
	{
	printf("%d\n", num);
	}
printf("\n\n");

//C
for (num = 1; num <= 15; num++)
	{
	total = total + num;
	}
printf("The sum is: %d", total);
printf("\n\n");

//D
total = 0;
for (num = 15; num <= 45; num = num + 2)
	{
	total = total + num;
	}
printf("The sum is: %d", total);
printf("\n\n");

//E
for (num = 1; num <= 50; num = num + 3)
{
	total = total + num;
}
printf("The sum is: %d", total);
printf("\n\n");

return 0;
}

