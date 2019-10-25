#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Prints numbers
 * @separator:  String to be printed between numbers
 * @n: Number of integers passed to the function
 * 
 * Description: Prints numbers,
 * followed by a new line
 * sum of all its parameters.
 * Return: Empty
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arguments;
	
	va_start(arguments, n);
	while (i < n)
	{
		printf("%d",va_arg(arguments, int));
		if (separator && n > i + 1)
			printf("%s", separator);
		i++;
	}
	va_end(arguments);
	printf("\n");	

