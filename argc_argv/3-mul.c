#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc: number of command line elemets
 *@argv: array of size of argc
 *Return: 0 succes
 */

int main(int argc, char **argv)
{
	unsigned int a = atoi(argv[1]) * atoi(argv[2]);

	if (argc < 3)
	{
		printf("Error\n");
	}
	else
		printf("%d\n", a);

	return (0);
}
