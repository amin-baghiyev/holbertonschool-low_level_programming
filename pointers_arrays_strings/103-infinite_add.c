#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: number to add
 * @n2: number to add
 * @r: buffer that will be written result
 * @size_r: size of buffer r
 *
 * Return: pointer to r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_l, n2_l, i;
	unsigned short sum;

	for (i = 0; i < size_r; i++)
		if (r[i] != 0)
			r[i] = 0;

	n1_l = 0;
	n2_l = 0;
	while (n1[n1_l] != '\0' || n2[n2_l] != '\0')
	{
		if (n1[n1_l] != '\0')
			n1_l++;
		if (n2[n2_l] != '\0')
			n2_l++;
	}
	i = (n1_l >= n2_l ? n1_l : n2_l) + 1;
	if (i >= size_r)
		return (0);

	r[i] = '\0';
	while (i > 0)
	{
		n1_l--;
		n2_l--;
		i--;
		sum = r[i];
		if (n1_l >= 0 && n1[n1_l] >= 48 && n1[n1_l] <= 57)
			sum += (n1[n1_l] - 48);
		if (n2_l >= 0 && n2[n2_l] >= 48 && n2[n2_l] <= 57)
			sum += (n2[n2_l] - 48);
		if (r[i] == '1')
			sum -= 48;

		if (sum >= 10)
			r[i - 1] = '1';
		r[i] = sum % 10 + 48;
	}
	return (r);
}
