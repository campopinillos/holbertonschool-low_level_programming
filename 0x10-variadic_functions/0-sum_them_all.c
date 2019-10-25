#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - Sum of all its parameters
 * @n: Number of arguments
 *
 * Description: function that returns the
 * sum of all its parameters.
 * Return: The sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int add = 0, i = 0;
	va_list arguments;

	va_start(arguments, n);
	while (i < n)
		add += va_arg(arguments, int),  i++;
	va_end(arguments);
	return (add);
}
