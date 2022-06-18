#include "monty.h"

/**
 * mod - gives the rest of division of the second
 * by first top elements of the stack.
 * @stack: stack element
 * @line_number: file's line
 */

void mod(stack_t **stack, unsigned int line_number)
{
int modulo;
if (!stack || !*stack || !((*stack)->next))
{
fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
exit(EXIT_FAILURE);
return;
}
if (((*stack)->n) == 0)
{
fprintf(stderr, "L%d: division by zero\n", line_number);
exit(EXIT_FAILURE);
return;
}
modulo = ((*stack)->next->n) % ((*stack)->n);
pop(stack, line_number);
(*stack)->n = modulo;
}
