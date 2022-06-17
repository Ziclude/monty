#include "monty.h"

/**
 * release - Memory release
 * @streaming: FILE streaming
 * @montcod: instructions
 * @op: action for function
 */

void release(FILE **streaming, char **montcod, char op)
{
static FILE *sastream;
static char *svmont;
if (op == 's')
{
sastream = *streaming;
svmont = *montcod;
}
else if (op == 'r')
{
free(svmont);
fclose(sastream);
}
}
