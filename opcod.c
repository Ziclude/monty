#include "monty.h"

/**
 * opcod - execution running
 * @stack: head
 * @string: string
 * @line_number: lines number
 * Return: Nothing
 */

void opcod(stack_t **stack, char *string, unsigned int line_number)
{
int a = 0;
instruction_t op[] = INSTRUCTIONS;
if (!strcmp(string, "stack"))
{
global.data = 1;
return;
}
if (!strcmp(string, "queue"))
{
global.data = 0;
return;
}
while (op[a].opcode)
{
if (strcmp(op[a].opcode, string) == 0)
{
op[a].f(stack, line_number);
return;
}
a++;
}
fprintf(stderr, "L%d: Unknown instruction %s\n", line_number, string);
exit(EXIT_FAILURE);
}
