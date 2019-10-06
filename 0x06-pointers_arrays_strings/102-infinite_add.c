#include "holberton.h"
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
	int i = 0, j = 0, big, s1, s2, sum, result, resid = 0;

	while (n1[i] != 0)
		i++;
	while (n2[j] != 0)
		j++;
	if (i + 2 > size_r || j + 2 > size_r)
		return (0);
	i--, j--;
	big = (i >= j) ? i + 2 : j + 2;
	r[big--] = 0;
	while (big >= 0)
	{
		s1 = (i >= 0) ? (n1[i] - '0') : 0;
		s2 = (j >= 0) ? (n2[j] - '0') : 0;
		sum = s1 + s2 + resid;
		result = (sum > 9) ? sum - 10 : sum;
		resid = (sum > 9) ? 1 : 0;
		r[big] = result + '0';
		big--, i--, j--;
	}
	(resid == 1) ? r[big] = 1 + '0' : '\0';
	if (r[0] == '0')
		r[0] = 0;
	return (r);
}
