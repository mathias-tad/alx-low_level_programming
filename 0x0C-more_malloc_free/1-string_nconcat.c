#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

int _strlen(char *s)
{
int i;
while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
 *string_nconcat - concatinate two strings with n chars from the s2
 *@s1: string 1
 *@s2: string 2
 *@n: number of char to be concatenated
 *Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i, j, len1 = 0, len2 = 0, t;
char *p;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = _strlen(s1);
len2 = _strlen(s2);
if (n > len2)
n = len2;

if (n < 0)
return (NULL);

t = len1 + n + 1;
p = malloc(sizeof(char) * t);
if (p == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
p[i] = s1[i];

for (j = 0; j < n && s2[j] != '\0'; j++)
p[i + j] = s2[j];

p[i + j] = '\0';
return (p);
}
