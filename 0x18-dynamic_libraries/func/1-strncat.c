#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string
 * @src: string
 * @n: int
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, i;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		dlen++;
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[dlen + i] = src[i];
	}
	dest[dlen + i] = '\0';
	return (dest);
}
