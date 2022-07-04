#include <stdio.h>

/**
* main - Entry point
*
* Return: always 0 (Seccess/correct)
*/
int main(void)
{
char ch;
for (ch = 48; ch <= 57; ch++)
{
putchar(ch);
if (ch != 57)
{
putchar(44);
putchar(32);
}
}
putchar(10);

return (0);
}
