#include <stdio.h>
/**
 * main - Accept empty value
 * write - Screen information
 * @void: Description of a empty parameter
 *
 * Description: This sort number from 9 to 10
 * Return: 0 Value if it works
 */
int main(void)
{
int x;
for (x = 0; x < 100; x++)
{
putchar((x / 10) + '0');
putchar((x % 10) + '0');
if (x < 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
