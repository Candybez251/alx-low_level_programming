#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @cap: a string
 * Return: cap
 */

char *cap_string(char *cap)
{
	int i = 0;

	while (cap[i])
	{
		while (!(cap[i] >= 'a' && cap[i] <= 'z'))
			i++;

		if (cap[index - 1] == ' ' ||
		    cap[index - 1] == '{' ||
		    cap[index - 1] == '}' ||
		    cap[index - 1] == ',' ||
		    cap[index - 1] == ';' ||
		    cap[index - 1] == '.' ||
		    cap[index - 1] == '!' ||
		    cap[index - 1] == '?' ||
		    cap[index - 1] == '"' ||
		    cap[index - 1] == '(' ||
		    cap[index - 1] == ')' ||
		    cap[index - 1] == '\t' ||
		    cap[index - 1] == '\n' ||
		    index == 0)
			cap[i] -= 32;

		i++;
	}

	return (cap);
}
