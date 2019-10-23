/**
 * print_name - Function that prints a name
 * @name: String name
 * @f: Pointer funtion
 *
 * Description: Function that prints a name
 * Return: Empty
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
