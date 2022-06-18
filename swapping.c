#include "monty.h"

/**
 * swap - swap two first elements of stack
 * @stack: stack element
 * @line_number: instruction's number
 */

void swap(stack_t **stack, unsigned int line_number)
{
stack_t *first = NULL;
int first_n = 0;
if (!stack || !*stack || !((*stack)->next))
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
first = *stack;
first_n = first->n;
first->n = first_n;
first->n = first->next->n;
first->next->n = first_n;
}
