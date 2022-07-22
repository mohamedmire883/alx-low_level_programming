#include "main.h"

/**
* _puts -> this is a function that puts
* @str: the parameter to _puts functon
* Return: retun length
*/
void _puts(char *str)
{
for (; *str != '\0';  str++)
{
_putchar(*str);
}
_putchar('\n');
}
