#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - print str
 *@separator: separator str
 *@n: number of elements
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *j;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(str, char *);

		if (separator != NULL && i != 0)
		{
			if (j != NULL)
			{
				printf("%s%s", separator, j);
			}
			else
				printf("%s(nil)", separator);
		}
		else
		{
			if (j != NULL)
				printf("%s", j);
			else
				printf("(nil)");
		}
	}
	printf("\n");
	va_end(str);
}
