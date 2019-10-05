#include "holberton.h"
#include <stdio.h>
/**
 * infinite_add - Adds two numbers
 * @p: First input pointer
 *
 * Description: Adds two numbers
 * Return: char
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, bigger, s1, s2, sum, result, resid = 0;

	while (n1[i] != 0)
		i++;
	while (n2[j] != 0)
		j++;
	i--, j--;
	bigger = (i >= j) ? i + 1: j + 1;
	if (size_r <= bigger + 1)
		return (0);
	while (bigger > 0)
	{
		s1 = (i >= 0) ? (n1[i] - '0') : 0;
		s2 = (j >= 0) ? (n2[j] - '0') : 0;
		sum = s1 + s2 + resid;
		result = (sum > 9) ? sum % 10: sum;
		resid = (sum > 9) ? 1 : 0;
		r[bigger] = result + '0';
		bigger--, i--, j--;
	}
	(resid == 1) ? r[bigger] = 1 + '0': 0;
	return (r);
}
