#include "monty.h"

/**
 * _div - divides the second by the one top elements of the stack.
 * @stack: stack
 * @line_number: file's line
 */

void _div(stack_t **stack, unsigned int line_number)
{
int quot;
if (!stack || !*stack || !((*stack)->next))
{
fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
if (((*stack)->n) == 0)
{
fprintf(stderr, "L%d: division by zero\n", line_number);
exit(EXIT_FAILURE);
return;
}
quot = ((*stack)->next->n) / ((*stack)->n);
pop(stack, line_number);
(*stack)->n = quot;
}
