#include "holberton.h"
/**
 * _divisor - Returns 1 if the input integer is a prime number
 * @prime: First input number
 * @proof: Second input divisor
 *
 * Description: Returns 1 if the input integer is a prime number
 * Return: Returns 1 if is a prime number 0 otherwise
 */
int _divisor(int proof, int prime)
{
	if (prime == proof)
		return (1);
	else if (prime % proof == 0 || prime < 2)
		return (0);
	return (_divisor(proof + 1, prime));
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number
 * @n: First input number
 *
 * Description: Returns 1 if the input integer is a prime number
 * Return: Returns 1 if is a prime number 0 otherwise
 */
int is_prime_number(int n)
{
	return (_divisor(2, n));
}
