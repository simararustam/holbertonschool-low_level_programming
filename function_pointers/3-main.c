#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main -entry point
 * @argc: size of arg
 * @argv: elements of args
 * Return: 0 succes
 */
int main(int argc, char **argv)
{
	int num1, num2, calc;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((op == op_div && num2 == 0) || (op == op_mod && num2 == 0))
	{
		printf("Error\n");
		return (100);
	}

	calc = op(num1, num2);

	printf("%d\n", calc);

	return (0);
}
