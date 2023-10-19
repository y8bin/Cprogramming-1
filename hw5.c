#include <stdio.h>

int two(num)
{
	if (num < 1)
		return 0;
	else
		return num % 2 + 10 * two(num / 2);
}

int main(void)
{
	int num;
	printf("Please enter a number: ");
	scanf_s("%d", &num);

	printf("%d", two(num));
	return 0;
}