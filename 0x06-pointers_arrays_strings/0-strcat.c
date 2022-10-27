#include "main.h"
/**
 * strcat - Concatenate the string pointed to by @src
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *_strcat - concatenate two strings
 * @dest: the string to append to
 * @src: the string to append
 * Description: This function appends the string pointed to by src to the
 * string pointed to by dest, overwriting the null byte at the end of dest.
 * Return: A pointer to the destination string @dest.
 * Return: a pointer to the destination string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	i = 0; while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	
	}
	dest[i] = '\0';
	return (dest);
}

										
