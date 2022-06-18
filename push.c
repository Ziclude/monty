#include "monty.h"

/**
 * push - Puts elements into the stack in FILO function.
 * @stack: stack element
 * @last_line: command's line
 */

void push(stack_t **stack, unsigned int last_line __attribute__((unused)))
{
char *n = global.point;
if ((isdig(n)) == 0)
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
if (global.point == 1)
{
if (!adnode(stack, atoi(global.point)))
{
exit(EXIT_FAILURE);
}
else
{
if (!qnode(stack, atoi(global.point)))
{
exit(EXIT_FAILURE);
}
}
}
