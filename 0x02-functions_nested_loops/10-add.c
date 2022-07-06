#include "main.h"

/**
* add -> adds two a and b
* @a&b: the passed args
* Return: sum
*/
int add(int a, int b)
{
int n;
n = %a + %b;
gputchar(n);
return (n);
}
