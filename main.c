#include "monty.h"

int sq_flag = 0;
/**
 * main - main function for monty program
 * @ac: int num of arguments
 * @av: arguments representing opcode filename
 * Return: 0
 */
int main(int ac, char **av)
{
	stack_t *stack;

	stack = NULL;
	if (ac != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	process_monty(av[1], &stack);
	free_dlistint(stack);

	return (0);
}

