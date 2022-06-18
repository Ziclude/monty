#include "monty.h"

/**
 * rotr - Swap first and last values of stack
 * @stack: stack element
 * @line_number: instruction's line
 */

void rotr(stack_t **stack, unsigned int line_number)
{
stack_t *tap, *bott;
(void) line_number;
if (!stack || !*stack || !(*stack)->next)
return;
tap = *stack;
while (tap->next)
tap = tap->next;
bott = tap->prev;
tap->next = *stack;
tap->prev = NULL;
bott->next = NULL;
(*stack)->bott = tap;
*stack = tap;
}
