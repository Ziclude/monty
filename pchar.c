#include "monty.h"

/**
 * pchar - Prints the stack top element as ASCII.
 * @stack: stack element.
 * @line_number: instruction's number.
 */

void pchar(stack_t **stack, unsigned int line_number)
{
if (!stack || !(*stack))
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
exit(EXIT_FAILURE);
return;
}
if (isacii((*stack)->n) == 0)
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
exit(EXIT_FAILURE);
return;
}
printf("%c\n", (*stack)->n);
}
