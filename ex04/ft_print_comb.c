#include <unistd.h>

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
void ft_tens(int num)
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
	hundred=0;
	tens=0;
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

void ft_number(int num)
{
	if(num>=100)
	{
		ft_hundreds(num);
	}
	else
	{
		if((num>=10)&&(num<=99))
		{
			ft_tens(num);
		}
		else
		{	
			ft_units(num);	
		}
	}
}
void ft_print_comb(void)
{
	int num;
	int position;
	int first_end;
	char m;
	m=',';
	position=3;
	num=12;
	first_end=num+7;

	while(num<=89)
	{
		ft_number(num);
		write(1,&m,1);
		if(num==first_end)
		{
			num=num+position;
			position++;
			first_end=first_end+10;
		}
		num++;
	}
		
}
int main()
{
	ft_print_comb();
	return 0;
}
