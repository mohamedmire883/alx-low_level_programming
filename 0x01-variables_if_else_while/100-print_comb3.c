#include <stdio.h>

/**
* main - Entry point
*
* Return: always 0 (Seccess/correct)
*/
int main(void)
{
int ch;
int n;
for (ch = 48; ch <= 57; ch++)
{

for (n = 49; n <= 57; ch++)
{
putchar(ch);
putchar(n);
if (ch != 56 || != 57)
{
putchar(44);
putchar(32);
}

}
putchar(10);

return (0);
}
