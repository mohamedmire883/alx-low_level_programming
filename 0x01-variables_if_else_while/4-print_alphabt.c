#include <stdio.h>

/**
* main - Entry point
*
* Return: always 0 (Seccess/correct)
*/
int main(void)
{
const char* ch;
for (ch = "a"; ch <= "z"; ch++)
{
if (ch == "q")

continue

else if (ch == "e")

putchar(ch);
}
putchar(10);

return (0);
}
