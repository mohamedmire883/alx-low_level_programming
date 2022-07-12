#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - generates random passwords for 101-crackme
* Return: zero
*/
int main(void)
{
int addition;
char character;

srand(time(NULL));
while (addition <= 2645)
{
character = rand() % 128;
addition += character;
putchar(character);
}
putchar(2772 - addition);
return (0);
}
