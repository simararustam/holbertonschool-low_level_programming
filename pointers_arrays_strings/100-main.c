#include "main."
/**
 *_atoi - entry point
 *@s: pointer
 *Return: 0 succes
 */

int _atoi(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 0 && s[i] <= 9)
		{
			return (s[i]);
		}
		else
			return (0); 
	}
}
