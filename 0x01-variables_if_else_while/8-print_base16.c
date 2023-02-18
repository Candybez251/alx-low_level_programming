#include <stdio.h>

int main(void)
{
	int num;
	int hex;

	num = 0;
	hex = 'a';


	for (num = 0; num <= 16; num++)
	{
		if (num < 10)
		{
			putchar(num + '0');

		}
			else if (num > 10)
			{
				putchar(hex);
				hex++;
			}
		}
	putchar('\n');
	return (0);
}
