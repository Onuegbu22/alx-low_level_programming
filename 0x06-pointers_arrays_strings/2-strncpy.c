#include "main.h"
/**
 * _strncpy - copys a string with n
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;  while (dest[i])
		i++;
	for (j = 0; src[i] != '\0'; j++)
	{
	des[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
