#include "monty.h"

/**
 * emptcod - Check empty string
 * @string: string
 * Return: 1 if succeed, -1 if not
 */

int emptcod(char **string)
{
int a = 0;
while (string[0][a] != '\0')
{
if (string[0][a] != ' ')
return (-1);
a++;
}
return (1);
}
