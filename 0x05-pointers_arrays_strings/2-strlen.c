#include "main.h"

/**
* _strlen -> function to gt the length of stringth
* @s: string to be passed to the function
* Return: retun length
*/
int _strlen(char *s)
{
int len;
while (*s != '\0')
{
len += 1;
*s = *s + 1;
}
return (len);
}
