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
	int ans = 0, num;
	(void) argc;
	(void) argv;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
		return (0);
	}

	num = atoi(argv[1]);
	ans += num / 25;

	num = num % 25;
	ans += num / 10;

	num = num % 10;
	ans += num / 5;

	num = num % 5;
	ans += num / 2;

	num = num % 2;
	ans += num;

	printf("%d\n", ans);

	return (0);
}
