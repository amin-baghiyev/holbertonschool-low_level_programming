#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert an integer
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int left_i, right_i, i, sign, result;

	i = 0;
	sign = 0;
	left_i = -1;
	right_i = -1;
	while (s[i] != '\0' && !(left_i > 0 && (s[i] < 48 || s[i] > 57)))
	{
		if (s[i] == 43 && left_i < 0)
			sign++;
		else if (s[i] == 45 && left_i < 0)
			sign--;
		if (left_i < 0 && (s[i] >= 48 && s[i] <= 57))
			left_i = i;
		if (left_i >= 0 && (s[i] >= 48 && s[i] <= 57))
			right_i = i;
		i++;
	}

	result = 0;
	i = 1;
	while (left_i != right_i + 1)
	{
		result += (i * (s[right_i] - '0'));
		right_i--;
		i *= 10;
	}

	result *= (sign < 0 ? -1 : 1);
	return (result);
}
