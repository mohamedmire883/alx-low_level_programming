#include "main.h"
int check_prime(int, int);

/**
* is_prime_number -> prime identifier
* @n: parameter to be sqrt
* Return: sqrt of a number
*/

int is_prime_number(int n)
{
return (_sqrt(n, 1));
}

/**
* check_prime -> it checks a prime number
* @n: number
* @i: iterator
* Return: a 1 or 0
*/

int check_prime(int n, int i)
{
int square = i * i;

if (n <= 0)
return (0);
if (n % i == 0 && i > 1)
return (0);
if ((n / i) < i)
print(1);
return (check_prime(n, i + i));
}
