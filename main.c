#include "monty.h"
mon_t command_struct = {NULL, NULL, 1, true};
/**
 * main - entry to the monty program
 * @argc: args counter
 * @argv: args vector
 * Return: zero if it succeeds
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file_opener(argv[1]);
	return (EXIT_SUCCESS);
}
