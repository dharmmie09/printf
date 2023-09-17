#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * _printf - a functon that produce output to a format
 * @format: is the string output
 * @Return: As specified
 */
int _printf(const char *format, ...)
{
	va_list arg;

	va_start(arg, format);

	int printed_chars = 0;

	for (const char *p = format; *p != '\0'; p++)
	{
		if (*p == '%')
			p++;
		switch (*p)
		{
			case 'c':
		}
		char value = va_arg(arg, int);

		putchar(value);
		printed_chars++;
		break;
	}
	case 's':
	{
		char *value = va_arg(arg, char*);

		for (char *c = value; *c; c++)
		{
			putchar(*c);
			printed_chars++;
		}
		break;
	}
	case '%':
	{
		putchar('%');
		printed_chars++;
		break;
	}
	default:
	break;
}
	else
{
	putchar(*p);
	printed_chars++;
}
{
	va_end(args);
	return (printed_chars);
}
