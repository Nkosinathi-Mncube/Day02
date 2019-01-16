#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_reverse_alphabet(void)
{	
	int y;
	y=122;

	while(y>=97)
	{
		ft_putchar(y);
		y--;
	}
}

