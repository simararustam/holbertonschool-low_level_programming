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
	int a;
	char c[] = "Error";

	if (argc != 3)
	{
		printf("%s\n",c);
		return (1);
	}

	a = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", a);

	return (0);
}
