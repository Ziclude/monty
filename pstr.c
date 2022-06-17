#include "monty.h"

/**
 * Pstr - Prints string starting from stack tops followed by
 * a new line
 * @stack: stack elements
 * @line_number: line's number
 */

void pstr(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
stack_t *trp = *stack;
while (trp)
{
if (trp->n > 32 && trp->n < 127)
printf("%c", (int)trp->n);
else
break;
trp = trp->next;
}
printf("\n");
}
