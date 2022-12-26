#include <unistd.h>


void _putchar(char p);
void print_fizz(void);
void print_buzz(void);
void fizz_buzz(void);

/**
 * main - fizz buzz program
 * @i:
 * @j:
 * @k:
 * @l:
 * Return: always 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '1'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				l++;
				if (l % 3 == 0 && l % 5 != 0 && l % 15 != 0)
				{
					print_fizz();
					_putchar(' ');
				}
				else if (l % 3 != 0 && l % 5 == 0 && l % 15 != 0)
				{
					if (l != 100)
					{
						print_buzz();
						_putchar(' ');
					}
					else
					{
						print_buzz();
						_putchar('\n');
						break;
					}
				}
				else if (l % 3 == 0 && l % 5 == 0 && l % 15 == 0)
				{
					fizz_buzz();
					_putchar(' ');
				}
				else
				{
					if (k == '0' && j == '0' && i == '0')
					{
						k = '1';
						_putchar(k);
						_putchar(' ');
					}
					else if (j == '0')
					{
						_putchar(k);
						_putchar(' ');
					}
					else if (j > '0' && i == '0')
					{
						_putchar(j);
						_putchar(k);
						_putchar(' ');
					}
				}
				if (l == 100)
					break;
			}
			if (l == 100)
				break;
		}
		if (l == 100)
			break;
	}
	return (0);
}

/**
 * _putchar - print character
 * @p: character variable
 */
void _putchar(char p)
{
	write(1, &p, 1);
}

/**
 * print_fizz - print the word fizz
 */
void print_fizz(void)
{
	_putchar('F');
	_putchar('i');
	_putchar('z');
	_putchar('z');
}

/**
 * print_buzz - print the word buzz
 */
void print_buzz(void)
{
	_putchar('B');
	_putchar('u');
	_putchar('z');
	_putchar('z');
}

/**
 * fizz_buzz - print FizzBuzz
 */
void fizz_buzz(void)
{
	print_fizz();
	print_buzz();
}
