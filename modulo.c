#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * mod - outputs the remainder of division
 * @stack: stack
 * @line_cnt: counts number of lines
 *
 * Return: void
 */
void mod(stack_t **stack, unsigned int line_cnt)
{
	int output;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_cnt);
		exit(EXIT_FAILURE);
		return;
	}
	if (((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_cnt);
		exit(EXIT_FAILURE);
		return;
	}

	output = ((*stack)->next->n) % ((*stack)->n);
	pop(stack, line_cnt);
	(*stack)->n = output;
}
