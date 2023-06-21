#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * _add -  adds first two nodes of the stack
 * @stack: stack
 * @line_cnt: counts number of lines
 * Return: nothing
 */
void _add(stack_t **stack, unsigned int line_cnt)
{
	int output;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_cnt);
		exit(EXIT_FAILURE);
	}

	output = ((*stack)->next->n) + ((*stack)->n);
	pop(stack, line_cnt);
	(*stack)->n = output;
}
