#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 101; i++)
	{
		if (i != 101)
		{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i == 100)
			{
				break;
			}
			printf(" ");
		}
		else
		printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
