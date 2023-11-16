#include "monty.h"

/**
 * _strcmp - the function helps compare 2 strings
 * @str1: 1st str
 * @str2: 2ndnd str
 * Return: 0 if the strings are the same otherwise 1
 */
int _strcmp(char *str1, char *str2)
{
	int i = 0;

	if (!str1 || !str2)
		return (1);
	while (str1[i] == str2[i])
	{
		if ((str1[i] == '\0'))
			return (0);
		i++;
	}
	return (1);
}
