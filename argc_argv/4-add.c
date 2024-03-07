#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc: number of command line elemets
 *@argv: array of size of argc
 *Return: 0 succes
 */

int main(int argc, char *argv[])
{
	char c[] = "Error", *array;
	int i, j;
	int sum = 0, res = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			array = argv[i];
			for (j = 0; array[j] != 0; j++)
			{
				if (array[j] <= 48 || array[j] >= 58)
				{
					printf("%s\n", c);
					return (1);
				}

			}
			res = atoi(argv[i]);
			sum += res;
		}
			printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);

	return (0);
}
