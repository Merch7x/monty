#include "monty.h"
/**
 * trim_whitespace - removed the white space available
 *
 * @str: the string to remove white space
 */
void trim_whitespace(char *str)
{
	int start = 0;
	int i = 0;
	int end = strlen(str) - 1;

	while (isspace(str[start]))
	{
		start++;
	}
	if (start > end)
	{
		str[0] = '\0';
		return;
	}
	while (end > start && isspace(str[end]))
	{
		end--;
	}
	for (i = start; i <= end; i++)
	{
		str[i - start] = str[i];
	}
	str[end - start + 1] = '\0';
}
