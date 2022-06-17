#include "monty.h"

/**
 * pchar - Prints the stack top element as ASCII.
 * @stack: stack element.
 * @line_number: instruction's number.
 */

void pchar(stack_t **stack, unsigned int line_number)
{
if (stack == '\0' || stack[0] == '\0')
{
fprintf(stderr, "L%i: can't pchar, stack empty\n", line_number);
release(NULL, NULL, 'r');
free_dlist(*stack);
free(var.point);
exit(EXIT_FAILURE);
}
if (stack[0]->n < 32 || stack[0]->n > 126)
{
fprintf(stderr, "L%i: can't pchar, value out of range\n", line_number);
release(NULL, NULL, 'r');
free_dlist(*stack);
free(var.point);
exit(EXIT_FAILURE);
}
printf("%c\n", stack[0]->n);
}
