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
int x, y;
for (x = '0'; x <= '8'; x++)
{
for (y = '1'; y <= '9'; y++)
{
if (! (x == y) && x < y)
{
putchar(x);
putchar(y);
}

if (!(x == '8' && y == '9') && !(x == y) && (x < y))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
