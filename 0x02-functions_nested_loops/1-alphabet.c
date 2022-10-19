nclude "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char ha;

	ha = 'a';

	while (ha <= 'z')
	{
		_putchar(ha);
		ha++;
	}

	_putchar('\n');
}
