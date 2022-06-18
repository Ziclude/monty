#include "monty.h"

/**
 * pstr - Prints string starting from stack tops followed by
 * a new line
 * @stack: stack elements
 * @line_number: line's number
 */

void pstr(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
stack_t *trp = *stack;
while (trp)
{
if (trp->n <= 0 || trp->n > 127)
break;
putchar((char) trp->n);
trp = trp->next;
}
putchar('\n');
}
