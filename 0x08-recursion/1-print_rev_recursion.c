#include "holberton.h"

/**
 *_print_rev_recursion - prints reverse of a string
 *@s: string to be printed
 *Return: void
 */

void _print_rev_recursion(char *s)
{
s--;
if (*s == 0)
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);

}
