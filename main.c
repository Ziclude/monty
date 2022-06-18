#define _POSIX_C_SOURCE 200809L
#include "monty.h"

void file_err(char *argv);
void err_usage(void);
int star = 0;

/**
 * main - entry point
 * @argv: arguments list
 * @argc: arguments number
 * Return: nothing
 */

int main(int argc, char **argv)
{
FILE *fil;
size_t len = 0;
char *buff = NULL;
char *stc = NULL;
stack_t *stack = NULL;
unsigned int line_number = 1;
global.data = 1;
if (argc != 2)
err_usage();
fil = fopen(argv[1], "r");
if (!fil)
file_err(argv[1]);
while ((getline(&buff, &len, fil)) != (-1))
{
if (star)
break;
if (*buff == '\n')
{
line_number++;
continue;
}
stc = strtok(buff, " \t\n");
if (!stc || *stc == '#')
{
line_number++;
continue;
}
global.point = strtok(NULL, " \t\n");
opcod(&stack, stc, line_number);
line_number++;
}
free(buff);
free_stck(stack);
fclose(fil);
exit(EXIT_SUCCESS);
}

/**
 * file_err - print error message
 * @argv: argv given by main()
 * Desc: print msg if main fails
 * Return: Nothing
 */

void file_err(char *argv)
{
fprintf(stderr, "Error: Can't open file %s\n", argv);
exit(EXIT_FAILURE);
}

/**
 * err_usage - prints usage message
 * Desc: if file isn't given
 * Return: Nothing
 */

void err_usage(void)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
