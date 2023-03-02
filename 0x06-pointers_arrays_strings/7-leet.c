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
	int encode[133];

	encode['a'] = 4;
	encode['A'] = 4;
	encode['e'] = 3;
	encode['E'] = 3;
	encode['o'] = 0;
	encode['O'] = 0;
	encode['t'] = 7;
	encode['T'] = 7;
	encode['l'] = 1;
	encode['L'] = 1;

	while (s[i] != '\0')
	{

		if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'o'
				|| s[i] == 'O' || s[i] == 't' || s[i] == 'T' || s[i] == 'l' || s[i] == 'L')
		{
			s[i] = encode[s[i]];
		}

		i++;
	}

	return (s);
}
