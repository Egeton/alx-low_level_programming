#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index - l] == '' ||
				str[index - l] == '\t' ||
				str[index - l] == '\n' ||
				str[index - l] == ',' ||
				str[index - l] == ';' ||
				str[index - l] == '.' ||
				str[index - l] == '!' ||
				str[index - l] == '?' ||
				str[index - l] == "" ||
				str[index - l] == '(' ||
				str[index - l] == ')' ||
				str[index - l] == '{' ||
				str[index - l] == '}' ||
				index == 0)
			str[index] -= 32;
		index++;
	}

	return (str);
}
