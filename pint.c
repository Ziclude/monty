#include "monty.h"

/**
 * pint - Prints the stack top element
 * @stack: stack element
 * @line_number: instruction's number
 */

void pint(stack_t **stack, unsigned int line_number)
{
if (*stack == '\0')
{
fprintf(stderr, "L%i: can't pint, stack empty\n", line_number);
release(NULL, NULL, 'r');
free_dlist(*stack);
free(global.point);
exit(EXIT_FAILURE);
}
printf("%i\n", stack[0]->n);
}
