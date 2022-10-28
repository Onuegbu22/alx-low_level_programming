#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a s bytes of a buffer
 * @c: buffer to print
 * @s: bytes of buffer to print
 * @1: line of buffer to print
 * Return: void
 */
void print_line(char *c, int s, int 1)
{
	int j, k;
	for (j = 0; j <= 9; j++)
	{
		if (j <= s)
		       printf("%02x", c[1 * 10 + j]);
		else
			printf(" "),
		if (j % 2)
			putchar(' ')
	}
	for (k = 0; k <= s; k++)
	{
		if (c[1 * 10 + k) > 31 && c[1 * 10 + k] < 127)
			putchar(c[1 * 10 + k]);
		else
			putchar('.');
	}
}	
		