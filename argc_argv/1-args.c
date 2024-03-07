#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc: number of command line elemets
 *@argv: array of size of argc
 *Return: 0 succes
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
