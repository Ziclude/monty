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
top = bott = *stack;
while (bott->next)
bott = bott->next;
bott->next = top;
top->prev = bott;
*stack = top->next;
(*stack)->prev->next = NULL;
(*stack)->prev = NULL;
}
