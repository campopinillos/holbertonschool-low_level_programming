/**
 * print_name - Function that prints a name
 * @name: String name
 * @age: Int age
 * @owner: String owner
 *
 * Description: Function that prints a name
 * Return: The new dog info
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
