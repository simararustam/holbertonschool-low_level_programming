#include <stdio.h>
#include "main.h"
/**
 *length - find len of s
 *@s: string
 *Return: len of string
 */

int length(char *s)
{
	if (*s)
	{
		s++;
		return (1 + length(s));
	}
	return (0);
}
/**
 *checker - check for ispalindrome
 *@s: string
 *@len: len of str
 *@start: start index of str
 *Return: 1 if is palindrome , 0 not palindrome
 */
int checker(char *s, int len, int start)
{
	if (start >= len)
	{
		return (1);
	}
	if (s[len] == s[start])
	{
		return (checker(s, len - 1, start + 1));
	}
	return (0);
}
/**
 *is_palindrome - entry point
 *@s: string
 *Return: result
 */
int is_palindrome(char *s)
{
	int len = length(s);
	int start = 0;

	return (checker(s, len - 1, start));
}
