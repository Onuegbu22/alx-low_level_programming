#include "main.h"
/**
 * power_operation - returns the natural square root of a number
 * @n: input number
 * @a: iterator
 * Return: square root or -1
 */
int power_operation(int n, int a)
{
	if (a % (n / a) == 0)
	{
		if (a * (n / a) == n)
			return (a);
		else
			return (-1);
	}
	return (0 + power_operation(n, a + 1));
}
