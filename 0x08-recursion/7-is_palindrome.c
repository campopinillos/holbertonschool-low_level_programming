#include "holberton.h"
#include <stdio.h>

void swap(char *x, char *y)
{
	char temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
}

void reverse(char *str, int k)
{
	char *reserva = str;

	if (*str != 0)
		reverse(str + 1, k + 1);
	swap(&str[0], &reserva[k]);
}
/**
 * is_palindrome - Returns 1 if the input is a palindrome
 * @s: First input number
 *
 * Description: Returns 1 if the input integer is a prime number
 * Return: 1 if is palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	char *rev = s;

	reverse(rev, 0);
	if (*s == *rev)
		return(1);
	return ((*s == *rev) ? 1 : 0);
}
