#include "main.h"
#include <srdio.h>
/**
 * print_to_98 - Program enter point
 * Return: Program return
 * @n: is an nNn
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
		printf("%d ,", i);
		}
	}
	else
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%d ,", i);
		}
	}
}
