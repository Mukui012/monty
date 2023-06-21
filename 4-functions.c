#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pstr - prints contents of a stack_t stack as a string
 * @stack: stack
 * @line_cnt: counts number of lines of error message
 * Return: void
 */
void pstr(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
	stack_t *current = *stack;

	while (current)
	{
		if (current->n <= 0 || current->n > 127)
			break;
		putchar((char) current->n);
		current = current->next;
	}
	putchar('\n');
}