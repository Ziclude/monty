#include "monty.h"

/**
 * for_line - preparation for execution
 * @inpt: instruction
 * Return: instructions NULL or formated
 */

char **for_line(char *inpt)
{
char **cats = NULL;
char *cat = NULL;
size_t d = 0;
if (inpt == '\0')
return ('\0');
if (inpt[0] == '\0' || inpt[1] == '\0')
return ('\0');
delnwline(&inpt);
if (emptcod(&inpt) == 1)
return ('\0');
cats = malloc(sizeof(char **) * 3);
if (cats == NULL)
{
fprintf(stderr, "Error: malloc failed");
release(NULL, NULL, 'r');
free(cats);
exit(EXIT_FAILURE);
}
cats[0] = NULL, cats[1] = NULL, cats[2] = NULL;
cat = strtok(inpt, " ");
while (cat != NULL && d <= 1)
{
cats[d] = cat;
cat = strtok(NULL, " ");
if (d >= 1)
break;
d++;
}
cats[d + 1] = NULL;
return (cats);
}
