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
int x, y, z;
for (x = '0'; x <= '7'; x++)
{
for (y = '1'; y <= '8'; y++)
{
for (z = '2'; z <= '9'; z++)
{
if (!(x == y) && !(y == z) && !(x == z) && x < y && y < z)
{
putchar(x);
putchar(y);
putchar(z);
}
if (!(x == '7' && y == '8' && z == '9'))
{
if (!(x == y) && !(y == z) && !(x == z) && x < y && y < z)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
