#include "monty.h"

/**
 * rotl - Get top to bottom of stack
 * @stack: stack elements
 * @line_number: instruction's number
 */

void rotl(stack_t **stack, unsigned int line_number)
{
stack_t *tap, *bott;
(void) line_number;
if (!stack || !*stack || !(*stack)->next)
return;
tap = bott = *stack;
while (bott->next)
bott = bott->next;
bott->next = tap;
tap->prev = bott;
*stack = tap->next;
(*stack)->prev->next = NULL;
(*stack)->prev = NULL;
}
