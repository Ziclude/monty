#include "monty.h"

/**
 * rotl - Get top to bottom of stack
 * @stack: stack elements
 * @line_number: instruction's number
 */

void rotl(stack_t **stack, unsigned int __attribute__((unused))line_number)
{
stack_t *tap, *bott;
if (stack == '\0' || stack == '\0')
return;
tap = *stack, bott = *stack;
while (bott->next != '\0')
bott = bott->next;
bott->next = tap;
tap->prev = bott;
tap->next->prev = '\0';
*stack = tap->next;
tap->next = '\0';
}
