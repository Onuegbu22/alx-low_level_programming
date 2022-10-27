#include "main.h"
/**
* _strcat - concatennates two strings 
* @dest: pointer to the string to be affix upon 
* @src: the string to affix  
* Return: pointer to destination string @dest.
*/
char *_strcat(char *dest, const char *str)
{
	int i;
	int j; i = 0;
	while (dest[i] != '\0')
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
