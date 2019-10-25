#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Prints strings
 * @separator:  String to be printed between strings
 * @n: Number of integers passed to the function
 * 
 * Description: Prints strings,
 * followed by a new line
 * sum of all its parameters.
 * Return: Empty
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *string;
	va_list arguments;
	
	va_start(arguments, n);
	while (i < n)
	{
		string = va_arg(arguments, char *);
		if (string)
			printf("%s",string);
		if (!string)
			printf("(nil)");
		if (separator && n > i + 1)
			printf("%s", separator);
		i++;
	}
	va_end(arguments);
	printf("\n");	
}
