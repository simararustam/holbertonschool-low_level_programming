#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - add
 * @a: a
 * @b: b
 * Return: value
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub
 * @a: a
 * @b: b
 * Return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul
 * @a: a
 * @b: b
 * Return: 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div
 * @a: a
 * @b: b
 * Return: 0.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - mod
 * @a: a
 * @b: b
 * Return: value
 */
int op_mod(int a, int b)
{
	return (a % b);
}
