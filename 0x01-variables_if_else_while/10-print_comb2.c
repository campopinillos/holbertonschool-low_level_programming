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
for (x = '0'; x <= '9'; x++)
{
for (y = '0'; y <= '9'; y++)
{
putchar(x);
putchar(y);
if (!(x == '9' && y == '9'))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
