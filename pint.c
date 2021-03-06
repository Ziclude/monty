#include "monty.h"

/**
 * pint - Prints the stack top element
 * @stack: stack element
 * @line_number: instruction's number
 */

void pint(stack_t **stack, unsigned int line_number)
{
if (!stack || !(*stack))
{
fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
printf("%d\n", (*stack)->n);
}
