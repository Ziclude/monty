#include "monty.h"

/**
 * mod - gives the rest of division of the second
 * by first top elements of the stack.
 * @stack: stack element
 * @line_number: file's line
 */

void mod(stack_t **stack, unsigned int line_number)
{
stack_t *first, *second;
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
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
second->n %= first->n;
*stack = second;
second->prev = NULL;
free(first);
}
