#include <stdio.h>
#include <string.h>
/**
 * main - Accept empty value
 * putchar - Screen information
 * @void: Description of a empty parameter
 *
 * Description: This is going print the alphabet in lower case
 * Return: 0 Value if it works
 */
int main(void)
{
char x = 'z';
while (x >= 'a')
{
putchar(x);
x--;
}
putchar('\n');
return (0);
}
