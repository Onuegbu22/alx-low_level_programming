#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *  main - Entry point
 *
 *  Return: Always 0 (success)
 */
int main(void)
{
	int n;

	int n;

	srand(time(0));
	n = rand() - rand_max / 2;
	/* your code goesthere */
	m =n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	Return (0);
}