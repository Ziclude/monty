#include "monty.h"

/**
 * isdig - checks if is digit
 * @str: string
 * Return: 1 if success, 0 if not
 */

int isdig(char *str)
{
if (!str || *str == '\0')
return (0);
if (*str == '-')
str++;
while (*str)
{
if (isdig(*str) == 0)
return (0);
str++;
}
return (1);
}

/**
 * isnum - checks if is number
 * @str: string
 * Return: 1 if true, 0 if not
 */

int isnum(char *str)
{
int a;
if (!str)
return (0);
for (a = 0; str[a]; a++)
if (a < '0' || a > '9')
return (0);
return (1);
}
