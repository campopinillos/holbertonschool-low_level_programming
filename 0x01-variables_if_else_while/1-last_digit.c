#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Accept empty value
 * write - Screen information
 * @void: Description of a empty parameter
 *
 * Description: This is going give us if a random is positive or negative
 * Return: 0 Value if it works
 */
int main(void)
{
int n, last;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, last);
else if (last == 0)
printf("Last digit of %d is %d and is 0\n", n, last);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
return (0);
}
