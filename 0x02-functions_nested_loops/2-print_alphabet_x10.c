#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabets in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	char i;

	for (ten = 0; ten <= 9; ten++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
