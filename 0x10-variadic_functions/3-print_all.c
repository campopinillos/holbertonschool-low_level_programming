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
	int i = 0, bol;
	char *string;
	va_list arguments;

	va_start(arguments, format);
	i = 0;
	while (format && format[i] != 0)
	{
		bol = 0;
		switch (format[i])
		{
		case 'c':
			printf("%c", (char) va_arg(arguments, int));
			bol = 1;
			break;
		case 'i':
			printf("%d", va_arg(arguments, int));
			bol = 1;
			break;
		case 'f':
			printf("%f", va_arg(arguments, double));
			bol = 1;
			break;
		case 's':
			string = va_arg(arguments, char *);
			bol = 1;
			if (!string)
				string = "(nil)";
			printf("%s", string);
			break;
		default:
			break;
		}
		if (format[i + 1] != 0 &&  bol == 1 && arguments != 0)
			printf(", ");
		i++;
	}
	va_end(arguments);
	printf("\n");
}

