#include "monty.h"

/**
 * get_function - execute instructions
 * @tap: stack
 * @line_number: instruction's number
 */

void get_function(stack_t **tap, unsigned int line_number)
{
instruction_t ops[] = {
{"push", push},
{"pall", pall},
{"pint", pint},
{"pop", pop},
{"add", add},
{"nop", nop},
{"sub", sub},
{"mul", mul},
{"div", div},
{"mod", mod},
{"swap", swap},
{"rotr", rotr},
{"rotl", rotl},
{"pchar", pchar},
{"pstr", pstr},
{NULL, NULL}
};
int a;
for (a = 0; ops[a].opcode != NULL; a++)
{
if (strcmp(global.point[0], ops[a].opcode) == 0)
{
ops[a].f(tap, line_number);
return;
}
}
if (ops[a].opcode == NULL)
{
fprintf(stderr, "L%u: unknown instruction %s\n", line_number, global.point[0]);
free(global.point);
free_dlist(*tap);
release(NULL, NULL, 'r');
exit(EXIT_FAILURE);
}
}
