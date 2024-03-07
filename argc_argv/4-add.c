#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc: number of command line elemets
 *@argv: array of size of argc
 *Return: 0 succes
 */

int main(int argc, char *argv[])
{
	char c[] = "Error";
	int i;
	unsigned int sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) >= 48 && atoi(argv[i]) <= 57)
			{
				sum += atoi(argv[i]);
				printf("%d\n", sum);
			}
			if (atoi(argv[i]) >= 58 && atoi(argv[i]) <= 47)
			{
				printf("%s", c);
				return (1);
			}
		}
	}
	return (0);
}
