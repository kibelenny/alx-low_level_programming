#include "main.h"

/**
 * str_concat - concat 2 strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to the concat
 */

char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int i, j, count_1 = 0, count_2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[count_1] != '\0')
		count_1++;
	while (s2[count_2] != '\0')
		count_2++;

	strout = malloc(sizeof(char) * (count_1 + count_2 + 1));
	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (i = 0; i < count_1; i++)
		strout[i] = s1[i];
	for (j = 0; j <= count_2; i++, j++)
		strout[i] = s2[j];
	return (strout);
}	
