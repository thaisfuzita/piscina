void	ft_putchar(char c);

void	ft_whichchar(int a, int b, int counta, int countb);

void	rush(int x, int y)
{
	int	countx;
	int	county;

	county = 1;
	if (x > 0 && y > 0)
	{
		while (county <= y)
		{
			countx = 1;
			while (countx <= x)
			{
				ft_whichchar(x, y, countx, county);
				countx++;
			}
			ft_putchar('\n');
			county++;
		}
	}
}

void	ft_whichchar(int a, int b, int counta, int countb)
{
	if (counta == 1 && countb == 1 || counta == 1 && countb == b)
	{
		ft_putchar('A');
	}
	else if (counta == a && countb == 1 || counta == a && countb == b)
	{
		ft_putchar('C');
	}
	else if (counta == 1 || counta == a || countb == 1 || countb == b)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}
