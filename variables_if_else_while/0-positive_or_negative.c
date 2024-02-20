#include <stdio.h>
#include <time.h>
#include<unistd.h>
#include <stdlib.h>
/**
 *main - entry part
 *Return: 0 succes
 */

int main(void)
{
int n;
srand(time(0));

n = rand() - RAND_MAX / 2;
printf("%d -- \n", n);

if (n > 0)
{
	printf("%d is positive \n", n);
}
else
{
	printf("%d is negative \n", n);
}

return (0);
}
