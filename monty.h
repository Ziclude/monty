#ifndef MONTY_H
#define MONTY_H
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define INSTRUCTIONS \
{ \
{"push", push}, \
{"pall", pall}, \
{"pint", pint}, \
{"pop", pop}, \
{"swap", swap}, \
{"nop", nop}, \
{"div", _div}, \
{"mul", mul}, \
{"add", add}, \
{"mod", mod}, \
{"sub", sub}, \
{"pchar", pchar}, \
{"rotr", rotr}, \
{"pstr", pstr}, \
{"rotl", rotl}, \
{NULL, NULL} \
} \

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */

typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */

typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct var - global
 * @data: stack mode
 * @point: argument of string
 * Description: global variable
 */

typedef struct var
{
int data;
char *point;
} var_t;

var_t global;

stack_t *adnode(stack_t **stack, const int n);
stack_t  *qnode(stack_t **stack, const int n);
void free_stck(stack_t *stack);
size_t prtstck(const stack_t *stack);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void opcod(stack_t **stack, char *string, unsigned int line_number);
int isdig(char *string);
int isnum(char *str);

#endif /*MONTY_H*/
