#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * swap -  swaps data from top to previous in stack
 * @stack: stack given by main
 * @line_cnt: number of lines
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_cnt)
{
	stack_t *temp = NULL;
	int temp_n = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_cnt);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	temp_n = temp->n;
	temp->n = temp_n;

	temp->n = temp->next->n;
	temp->next->n = temp_n;
}
