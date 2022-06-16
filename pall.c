#include "monty.h"

/**
 * pall - Prints stack elements in the LIFO's way.
 * @stack: stack elements
 * @last_line: command's line
 */

void pall(stack_t **stack, __attribute__((unused))unsigned int last_line)
{
stack_t *stack_prt;
stack_prt = *stack;
if (stack_prt == '\0')
return;
while (stack_prt != '\0')
{
printf("%i\n", stack_prt->n);
stack_prt = stack_prt->next;
}
}
