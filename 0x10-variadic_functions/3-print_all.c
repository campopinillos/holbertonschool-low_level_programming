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
	int d;
	float f;
	char *s, c;
	va_list arguments;

	va_start(arguments, format);
	i = 0;
	while (format[i] != 0)
	{
		switch (format[i])
		{
		case 'c':
			c = (char) va_arg(arguments, int);
			printf("%c", c);
			break;
		case 'i':
			d = va_arg(arguments, int);
			printf("%d", d);
			break;
		case 'f':
			f = va_arg(arguments, double);
			printf("%f", f);
			break;
		case 's':
			s = va_arg(arguments, char *);
			if (s)
				printf("%s", s);
			else
				printf("(nil)");
			break;
		}
		if (i > 0 && format[i + 1] != 0)
			printf(", ");
		i++;
	}
	va_end(arguments);
	printf("\n");
}
