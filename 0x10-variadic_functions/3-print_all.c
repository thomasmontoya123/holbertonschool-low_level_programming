#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_all - print anything
* @format: format of values
*
* Return: void
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *stringCase;
	va_list valist;

	while (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(valist, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(valist, int));
				break;
			case 'i':
				printf("%i", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				break;
			case 's':
				stringCase = va_arg(valist, char *);
				if (stringCase != NULL)
				{
					printf("%s", stringCase);
					break;
				}
				printf("(nil)");
				break;
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i'
		|| format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(valist);
}
