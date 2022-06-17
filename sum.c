#include "monty.h"

/**
 * add - adds of top elements of stack
 * @stack: stack element
 * @line_number: file's line
 */

void add(stack_t **stack, unsigned int line_number)
{
stack_t *first, *second;
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
release(NULL, NULL, 'r');
free_dlist(*stack);
free(global.point);
exit(EXIT_FAILURE);
}
first = *stack;
second = (*stack)->next;
second->n += first->n;
*stack = second;
second->prev = NULL;
free(first);
}
