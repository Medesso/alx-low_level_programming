#include <stdio.h>
/**
 * main - prints out all of the arguments passed to it.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	/*Unused parameter*/
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
