#include <unistd.h>

void ft_putchar (int c)
{
	write(1,&c,1);
}

void ft_print_numbers(void)
{
	char k;
	k=48;

	while(k<=57)
	{
		ft_putchar(k);
		k++;
	}
}
int main()
{
	ft_print_numbers();
	return 0;
}
