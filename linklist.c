#include "monty.h"

/**
 * qnode - adds element in stack in LIFO way
 * @stack: head
 * @n: node's number
 * Return: new node if succeed, NULL if not
 */

stack_t *qnode(stack_t **stack, const int n)
{
stack_t *nouv = malloc(sizeof(stack_t));
stack_t *curt = *stack;
if (!nouv)
{
free(nouv);
return (NULL);
}
nouv->n = n;
if (!*stack)
{
nouv->next = NULL;
nouv->prev = NULL;
*stack = nouv;
return (nouv);
}
while (curt)
{
if (!curt->next)
{
nouv->next = NULL;
nouv->prev = curt;
curt->next = nouv;
break;
}
curt = curt->next;
}
return (nouv);
}

/**
 * adnode - adds node in stack in FIFO way
 * @stack: head
 * @n: new node number
 * Return: new node if succeed, NULL if not
 */

stack_t *adnode(stack_t **stack, const int n)
{
stack_t *nouv = malloc(sizeof(stack_t));
if (!nouv)
{
fprintf(stderr, "Error: malloc failed\n");
free(nouv);
return (NULL);
}
nouv->n = n;
nouv->next = *stack;
nouv->prev = NULL;
if (*stack)
(*stack)->prev = nouv;
*stack = nouv;
return (nouv);
}

/**
 * prtstck - prints contents of stack
 * @stack: head
 * Return: number of elements
 */

size_t prtstck(const stack_t *stack)
{
size_t d = 0;
while (stack)
{
printf("%d\n", stack->n);
stack = stack->next;
d++;
}
return (d);
}

/**
 * free_stck - frees list
 * @stack: head
 * Return: void
 */

void free_stck(stack_t *stack)
{
stack_t *curt = stack;
stack_t *nouv;
if (stack)
{
nouv = stack->next;
while (curt)
{
free(curt);
curt = nouv;
if (nouv)
nouv = nouv->next;
}
}
}
