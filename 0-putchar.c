#include "main.h"
/**
 * main - entry block
 * @void: no argument
 * Return: 0
 **/
int main(void)
{
	char amir[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(amir[c]);
	}
	_putchar('\n');
	return (0);
}
