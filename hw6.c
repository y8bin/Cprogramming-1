#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[5];
	int i = 0, odd, even;
	int num=0;
	printf("please intput five integers: ");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	printf("odd numbers: ");
	for (i = 0; i < 5; i++)
		if (arr[i] % 2 = 0)
			printf("%d", arr[i]);

	printf("even numbers: ");
	for (i = 0; i < 5; i++)
		if (arr[i] % 2 != 0)
			printf("%d ", arr[i]);

	return 0;
}