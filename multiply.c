#include "monty.h"

/**
 * mul - multiplies second by first top elements of stack
 * @stack: stack element
 * @line_number: file's line
 */

void mul(stack_t **stack, unsigned int line_number)
{
int prod;
if (!stack || !*stack || !((*stack)->next))
{
fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
exit(EXIT_FAILURE);
return;
}
prod = ((*stack)->next->n) * ((*stack)->n);
pop(stack, line_number);
(*stack)->n = prod;
}
