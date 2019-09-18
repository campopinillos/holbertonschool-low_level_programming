#include <stdio.h>
#include <string.h>
/**
 * main - Accept empty value
 * string - string value
 * strcpy - copies the string pointed to
 * puts - writes a string to stdout up to but not including the null character
 * @void: Description of a empty parameter
 *
 * Description: This is going to print
 * retun: 0 Value if it works
*/
int main(void)
{
char string[52];
strcpy(string, "\"Programming is like building a multilingual puzzle");
puts(string);
return (0);
}
