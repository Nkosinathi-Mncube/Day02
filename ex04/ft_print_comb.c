#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void ft_units(int num)
{
	int zero;
	int units;
	units=0;
	zero=0;
	units=num+48;
	zero=zero+48;
	write(1,&zero,1);
	write(1,&zero,1);
	write(1,&units,1);
}
*void ft_tens(int num)
{
	int tens;
	int units;
	int zero;
	tens=0;
	units=0;
	zero=0;

	tens=num/10;
	units=num-(tens*10);
	tens=tens+48;
	units=units+48;
	zero=zero+48;
	write(1,&zero,1);
	write(1,&tens,1);
	write(1,&units,1);
}
void ft_hundreds(int num)
{	
	int hundred;
	int tens;
	int units;
	hundreds=0;
	ten=0;
	units=0;

	hundred=(num/100);
	tens=(num-(hundred*100))/10;
	units=num-((hundred*100)+(tens*10));
	hundred=hundred+48;
	tens=tens+48;
	units=units+48;
	write(1,&hundred,1);
	write(1,&tens,1);
	write(1,&units,1);
}
void ft_print_comb(void)
{
			
}
int main()
{
	ft_units(8);
	return 0;
}
