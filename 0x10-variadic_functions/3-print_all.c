#include <stdio.h>
#include <stdarg.h>
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
	char *string, *com = "";
	va_list arguments;

	va_start(arguments, format);
	i = 0;
	while (format[i])
	{
		if (format[i + 1])
			c = ", ";
		switch (format[i])
		{
		case 'c':
			printf("%c%s", (char) va_arg(arguments, int), com);
			break;
		case 'i':
			printf("%d%s", va_arg(arguments, int), com);
			break;
		case 'f':
			printf("%f%s", va_arg(arguments, double), com);
			break;
		case 's':
			string = va_arg(arguments, char *);
			if (!string)
				string = "(nil)";
			printf("%s%s", string, com);
			break;
		}
		i++;
	}
	va_end(arguments);
	printf("\n");
}
