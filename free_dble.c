#include "monty.h"

/**
 * free_dble - free memory
 * @p: string
 */

void free_dble(char **p)
{
size_t a = 0;
if (p != '\0')
{
while (p[a])
{
free(p[a]);
a++;
}
}
free(p);
}
