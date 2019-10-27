#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Prints all
 * @format:  String
 *
 * Description: Function that prints anything
 * Return: Empty
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *c = "";
	va_list arguments;

	va_start(arguments, format);
	i = 0;
	while (format[i] != 0)
	{
		if (i >= 0 && format[i + 1] != 0)
			c = ", ";
		switch (format[i])
		{
		case 'c':
			printf("%c%s", (char) va_arg(arguments, int), c);
			break;
		case 'i':
			printf("%d%s", va_arg(arguments, int), c);
			break;
		case 'f':
			printf("%f%s", va_arg(arguments, double), c);
			break;
		case 's':
			string = va_arg(arguments, char *);
			if (string)
				printf("%s%s", string, c);
			else
				printf("%p%s", string, c);
			break;
		}
		i++;
	}
	va_end(arguments);
	printf("\n");
}
