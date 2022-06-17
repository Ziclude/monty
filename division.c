#include "monty.h"

/**
 * _div - divides the second by the one top elements of the stack.
 * @stack: stack
 * @line_number: file's line
 */

void _div(stack_t **stack, unsigned int line_number)
{
stack_t *first, *second;
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
release(NULL, NULL, 'r');
free_dlist(*stack);
free(global.point);
exit(EXIT_FAILURE);
}
first = *stack;
second = (*stack)->next;
if (first->n == 0)
{
fprintf(stderr, "L%u: division by zero\n", line_number);
release(NULL, NULL, 'r');
free_dlist(*stack);
free(global.point);
exit(EXIT_FAILURE);
}
second->n /= first->n;
*stack = second;
second->prev = NULL;
free(first);
}
