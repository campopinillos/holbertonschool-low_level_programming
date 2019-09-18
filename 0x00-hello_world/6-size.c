#include <stdio.h>
/**
 * main - Accept empty value
 * printf - Prints inputs
 * sizeof - Show the size
 * @void: Description of a empty parameter
 *
 * Description: This is going to print
 * Return: 0 Value if it works
 */
int main(void)
{
printf("Size of a char: %d byte(s)\n", (int)sizeof(char));
printf("Size of an int: %d byte(s)\n", (int)sizeof(int));
printf("Size of a long int: %d byte(s)\n", (int)sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", (int)sizeof(long long int));
printf("Size of a float: %d byte(s)\n", (int)sizeof(float));
return (0);
}
