#include "holberton.h"
#include <stdio.h>

/**
 *reverse_array - reveses content of an array
 *@a: array
 *@n: number of an array
 *Return: void
 */

void reverse_array(int *a, int n)
{

int i = n - 1;
int j = 0;
int rev_a[n];

while (i >= 0)
{
rev_a[j] = a[i];
i--;
j++;
}
i = 0;
while (i < n)
{
a[i] = rev_a[i];
i++;
}

}
