#include "main.h"

/**
 * main - main
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char **argv)
{
	int x, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}
	return (0);
}
