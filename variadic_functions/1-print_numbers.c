#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - print numb var func
 *@separator: separator string
 *@n: number of elm
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i, j;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(num, unsigned int);

		if (separator != NULL && i != 0)
		{
			printf("%s%d", separator, j);
		}
		else
			printf("%d", j);
	}
	va_end(num);
	printf("\n");
}
