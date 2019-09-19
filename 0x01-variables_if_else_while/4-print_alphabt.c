#include <stdio.h>
/**
 * main - Accept empty value
 * putchar - Screen information
 * @void: Description of a empty parameter
 *
 * Description: This is going print the alphabet without e q letters
 * Return: 0 Value if it works
 */
int main(void)
{
char x = 'a';
while (x <= 'z')
{
if (x != 'e' && x != 'q')
{
putchar(x);
}
x++;
}
putchar('\n');
return (0);
}
