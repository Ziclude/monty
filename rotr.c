#include "monty.h"

/**
 * rotr - Swap first and last values of stack
 * @stack: stack element
 * @line_number: instruction's line
 */

void rotr(stack_t **stack, unsigned int __attribute__((unused))line_number)
{
stack_t *tap = '\0', *bott = '\0';
if (stack == '\0' || *stack == '\0')
return;
tap = *stack, bott = *stack;
while (bott->next != '\0')
bott = bott->next;
tap->prev = bott;
bott->next = tap;
bott->prev->next = '\0';
bott->prev = '\0';
stack[0] = bott;
}
