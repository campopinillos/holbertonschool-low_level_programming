#include "holberton.h"
#include <stdio.h>
/**
 * infinite_add - Adds two numbers
 * @n1: First input pointer
 * @n2: Second input pointer
 * @r: Buffer that the function will use to store the result
 * @size_r: Buffer size
 *
 * Description: Adds two numbers
 * Return: char
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, count = 0, s1, s2, sum, result, resid = 0, rev;

	while (n1[i] != 0)
		i++;
	while (n2[j] != 0)
		j++;
	if (i > size_r - 2 || j > size_r - 2)
		return (0);
	i--, j--;
	while (i >= 0 || j >= 0)
	{
		s1 = (i >= 0) ? (n1[i--] - '0') : 0;
		s2 = (j >= 0) ? (n2[j--] - '0') : 0;
		sum = s1 + s2 + resid;
		result = (sum > 9) ? sum % 10 : sum;
		resid = (sum > 9) ? 1 : 0;
		r[count] = result + '0';
		count++;
	}
	(resid == 1) ? r[count++] = 1 + '0' : '\0';
	for (i = count; i > 0 && j < i; i--, j++)
	{
		rev = r[j];
		r[j] = r[i];
		r[i] = rev;
	}
	r[count] = 0;
	return (r);
}
