#include <stdio.h>
#include <stdlib.h>

/**
  *main - Prints the op codes of itself
  *@argc: The number of arguments supplied to the program
  *@argv: An array of pointers to the arguments
  *
  * Return: Always 0
  */
int main(int argc, char *argv[])
{
	int bytes, index;
	char *s;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	s = (char *)main;
	for (index = 0; index < bytes - 1; index++)
		printf("%02hhx ", s[index]);
	printf("%02hhx\n", s[index]);
	return (0);
}
