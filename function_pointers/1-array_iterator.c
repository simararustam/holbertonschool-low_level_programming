#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - prnt arr
 *@array: arr
 *@size: siizeof array
 *@action: func to ptr
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
