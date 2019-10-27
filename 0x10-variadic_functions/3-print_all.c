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
	unsigned int i = 0;
	char *string;
	va_list arguments;

	va_start(arguments, format);
	i = 0;
	while (format[i] != 0)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char) va_arg(arguments, int));
			break;
		case 'i':
			printf("%d", va_arg(arguments, int));
			break;
		case 'f':
			printf("%f", va_arg(arguments, double));
			break;
		case 's':
			string = va_arg(arguments, char *);
			if (string)
				printf("%s", string);
			else
				printf("%p", string);
			break;
		}
		if (i > 0 && format[i + 1] != 0)
			printf(", ");
		i++;
	}
	va_end(arguments);
	printf("\n");
}
