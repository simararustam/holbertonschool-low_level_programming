#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - print func
 *@name: name
 *@f: func to ptr
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
