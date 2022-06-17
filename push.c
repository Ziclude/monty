#include "monty.h"

/**
 * push - Puts elements into the stack in FILO function.
 * @stack: stack element
 * @last_line: command's line
 */
void push(stack_t **stack, __attribute__((unused))unsigned int last_line)
{
stack_t *nouv, *trp;
if (global.point[1] == NULL || check(global.point[1]) == -1)
{
fprintf(stderr, "L%i: usage: push integer\n", last_line);
release(NULL, NULL, 'r');
free_dlist(*stack);
free(global.point);
exit(EXIT_FAILURE);
}
trp = *stack;
nouv = malloc(sizeof(stack_t));
if (nouv == '\0')
{
fprintf(stderr, "Error: malloc failed\n", last_line);
release(NULL, NULL, 'r');
free_dlist(*stack);
free(global.point);
exit(EXIT_FAILURE);
}
nouv->next = '\0';
nouv->n = atoi(global.point[1]);
nouv->prev = '\0';
*stack = nouv;
nouv->next = trp;
if (trp != '\0')
trp->prev = nouv;
}
