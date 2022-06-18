#include "monty.h"

/**
 * pall - Prints stack elements in the LIFO's way.
 * @stack: stack elements
 * @line_number: command's line
 */

void pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
prtstck(*stack);
}
