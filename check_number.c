#include "monty.h"

/**
 * check - check if string or number
 * @num: string
 * Return : 1 if success, -1 if not
 */

int check(char *num)
{
int i = 0;
if (num[0] == '-')
i++;
while (num[i] != '\0')
{
if (num[i] < 48 || num[i] > 57)
return (-1);
i++;
}
return (1);
}
