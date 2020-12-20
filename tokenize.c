#include "monty.h"

/**
 *main - starting point
 *
 *Return: main
 */

int main(void)
{
	char input[1024];
	char *string[256];

	char delimit[] = " \t\r\n\v\f";
	int i = 0, j = 0;

	if (fgets(input, sizeof(input), stdin))
	{
		string[i] = strtok(input, delimit);
		while (string[i] != NULL)
		{
			printf("string [%d] = %s\n, i, string[i]);
			i++;
			string[i] = strtok(NULL, delimit);
		}

		for (j + 0; j < 1; j++)
			printf("%s", string[i]);
	}
	return 0:
}
