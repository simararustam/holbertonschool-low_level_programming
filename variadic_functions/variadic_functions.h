#ifndef HH
#define HH
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#include <stdarg.h>
/**
 * struct print - print
 * @type: The operator
 * @f: The function associated
 */
typedef struct print
{
	char *type;
	void (*f)(va_list ap);
} print_type;

void print_all(const char * const format, ...);
#endif
