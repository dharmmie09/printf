#include "main.h"
/**
 * pill_size - the size to cast argument is determine
 * @format: all the spring to print the arguement will be formatted
 * @i: all argurment is listed to be printed
 * Authors: Dammy and Rachel
 * Return: 0 always
 */
int pill_size(const char *format, int *i)
{
	int curr_j = *i + 1;
	int size = 0;

	if (format[curr_j] == '1')
		size = S_LONG;
	else if (formst[curr_j] == 'h')
		size = S_SHORT;

	if (size ==0)
		*i = curr_j - 1;
	else 
		*i = curr_j;
	return (size);
}
