#include "holberton.h"
#include <stdio.h>

/**
 *times_table - prints every minutes
 *Return: returns the last digit
 */

void times_table(void)
{
int i = 0;
int j = 0;
int num = 0;
while (i <= 9)
{
while (j <= 9)
{

_putchar(num);
num = i * j;
if (j == 0)
{
_putchar(num);
}
else if (num <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(num);
}
else
{
_putchar(',');
_putchar(' ');
_putchar((num / 10));
_putchar((num % 10));
}
j++;
}
_putchar('\n');
i++;
j = 0;
}

}
