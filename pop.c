#include "monty.h"

/**
 * pop - Delete the stack's top element.
 * @stack: stack elements
 * @last_line: instruction's number
 */

void pop(stack_t **stack, unsigned int last_line)
{
stack_t *trp;
if (!stack || !*stack)
{
fprintf(stderr, "L%u: can't pop an empty stack\n", last_line);
exit(EXIT_FAILURE);
}
trp = (*stack)->next;
free(*stack);
*stack = trp;
if (!*stack)
return;
(*stack)->prev = NULL;
}
