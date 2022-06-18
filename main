#include "monty.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arguments
 * Return: success
 * Description: Main function
 */

int main(int argc, char **argv)
{
FILE *streaming = NULL;
char *montcod = NULL;
size_t sz = 0;
unsigned int n_line = 0;
stack_t *cat = NULL;
if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
streaming = fopen(argv[1], "r");
if (streaming == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
while (getline(&montcod, &sz, streaming) != EOF)
{
n_line++;
release(&streaming, &montcod, 's');
if (n_line != '\0')
free(global.point);
global.point = for_line(montcod);
if (global.point == NULL || (global.point[0][0] == '\n' ||
global.point[0][0] == '#'))
continue;
else
get_function(&cat, n_line);
}
release(NULL, NULL, 'r');
free(global.point);
free_dlist(cat);
return (EXIT_SUCCESS);
}
