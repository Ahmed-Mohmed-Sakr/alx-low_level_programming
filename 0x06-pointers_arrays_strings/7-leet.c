#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 *
 * @s: string
 *
 * Description:
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * Return: string
 */

char *leet(char *s)
{
	int i = 0;
	int encode[150];

	encode[(int)'a'] = 4;
	encode[(int)'A'] = 4;
	encode[(int)'e'] = 3;
	encode[(int)'E'] = 3;
	encode[(int)'o'] = 0;
	encode[(int)'O'] = 0;
	encode[(int)'t'] = 7;
	encode[(int)'T'] = 7;
	encode[(int)'l'] = 1;
	encode[(int)'L'] = 1;

	while (s[i] != '\0')
	{

		if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'o'
				|| s[i] == 'O' || s[i] == 't' || s[i] == 'T' || s[i] == 'l' || s[i] == 'L')
		{
			s[i] = encode[(int)s[i]];
		}

		i++;
	}

	return (s);
}
