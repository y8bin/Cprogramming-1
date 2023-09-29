#include <stdio.h>

int main(void)
{
	double dist_k;
	double dist_m;

	printf("Please enter kilometers: ");
	scanf_s("%lf", &dist_k);

	dist_m = 1 / 1.609 * 3.5253;

	printf("%.1f km is equal to %.1f miles.", dist_k, dist_m);
}