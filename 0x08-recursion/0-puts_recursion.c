#include "main.h"

/**
*_puts_recursion-this function prints string recursively
*@s: string parameter
*/
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(++s);
}
else
_putchar('\n');
}

