#include "monty.h"

/**
 * sub - subtracts the top with the second top elements of stack
 * @stack: stack element
 * @line_number: file's line
 */

void sub(stack_t **stack, unsigned int line_number)
{
int diff;
if (!stack || !*stack || !((*stack)->next))
{
fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
diff = ((*stack)->next->n) - ((*stack)->n);
pop(stack, line_number);
(*stack)->n = diff;
}
