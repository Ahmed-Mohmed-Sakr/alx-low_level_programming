#include "main.h"

/**
 * main - begining point
 *
 * @argc: arguments count
 * @argv: arguments values
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int ans = 0, i;
	(void) argc;
	(void) argv;

	if (argc >= 2)
	{
		for (i = 1 ; i < argc ; i++)
		{
			if (isdigit(argv[i][0]))
			{
				ans += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	printf("%d\n", ans);

	return (0);
}
