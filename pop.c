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
fprintf(stderr, "L%i: can't pop an empty stack\n", last_line);
/*release(NULL, NULL, 'r');*/
/*free_dlist(*stack);*/
/*free(global.point);*/
exit(EXIT_FAILURE);
}
trp = (*stack)->next;
free(*stack);
*stack = trp;
/*free(trp);*/
if (!*stack)
return;
(*stack)->prev = NULL;
}
