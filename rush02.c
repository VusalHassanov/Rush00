
void	rush00(int max_x, int max_y)
{
	int		x;
	int		y;

	x = 1;
	y = 1;
	if (max_x <= 0 || max_y <= 0)
	{
		write(1, "Hey, Buddy keep calm and put positive number !", 45);
		return ;
	}
	while (y <= max_y)
	{
		while (x <= max_x)
		{
			if ((x == 1 && y == 1) || (x == max_x && y == 1) || (x == 1
					&& y == max_y) || (x == max_x && y == max_y))
			{
				ft_putchar('o');
			}
			else if (x == 1 || x == max_x)
			{
				ft_putchar('|');
			}
			else if (y == 1 || y == max_y)
			{
				ft_putchar('-');
			}
			else
			{
				ft_putchar(' ');
			}
			x++;
		}
		y++;
		x = 1;
		ft_putchar("\n");
	}
}





void	rush01(int max_x, int max_y)
{
	int		x;
	int		y;

	x = 1;
	y = 1;
	if (max_x <= 0 || max_y <= 0)
	{
		write(1, "Hey, Buddy keep calm and put positive number !", 45);
		return ;
	}
	while (y <= max_y)
	{
		while (x <= max_x)
		{
			if ((x == 1 && y == 1) ||  (x == max_x && y == max_y))
			{
				ft_putchar('/');
			}
			else if ((x == max_x && y == 1) || (x == 1&& y == max_y) )
			{
				ft_putchar('\\');
			}
			else if (x == 1 || x == max_x)
			{
				ft_putchar('*');
			}
			else if (y == 1 || y == max_y)
			{
				ft_putchar('*');
			}
			else
			{
				ft_putchar(' ');
			}
			x++;
		}
		y++;
		x = 1;
		ft_putchar('\n');
	}
}

void	rush(int max_x, int max_y)
{
	int		x;
	int		y;

	x = 1;
	y = 1;
	if (max_x <= 0 || max_y <= 0)
	{
		write(1, "Hey, Buddy keep calm and put positive number !", 45);
		return ;
	}
	while (y <= max_y)
	{
		while (x <= max_x)
		{
			if ((x == 1 && y == 1) ||  (x == max_x && y == 1))
			{
				ft_putchar('A');
			}
			else if ((x == 1 && y == max_y) || (x == max_x && y == max_y) )
			{
				ft_putchar('C');
			}
			else if (x == 1 || x == max_x)
			{
				ft_putchar('B');
			}
			else if (y == 1 || y == max_y)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			x++;
		}
		y++;
		x = 1;
		ft_putchar('\n');
	}
}

void	rush03(int max_x, int max_y)
{
	int		x;
	int		y;

	x = 1;
	y = 1;
	if (max_x <= 0 || max_y <= 0)
	{
		write(1, "Hey, Buddy keep calm and put positive number !", 45);
		return ;
	}
	while (y <= max_y)
	{
		while (x <= max_x)
		{
			if ((x == 1 && y == 1) ||  (x == 1 && y == max_y))
			{
				ft_putchar('A');
			}
			else if ((x == max_x && y == 1) || (x == max_x && y == max_y) )
			{
				ft_putchar('C');
			}
			else if (x == 1 || x == max_x)
			{
				ft_putchar('B');
			}
			else if (y == 1 || y == max_y)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			x++;
		}
		y++;
		x = 1;
		ft_putchar('\n');
	}
}

void	rush04(int max_x, int max_y)
{
	int		x;
	int		y;

	x = 1;
	y = 1;
	if (max_x <= 0 || max_y <= 0)
	{
		write(1, "Hey, Buddy keep calm and put positive number !", 45);
		return ;
	}
	while (y <= max_y)
	{
		while (x <= max_x)
		{
			if ((x == 1 && y == 1) ||  (x == max_x && y == max_y))
			{
				ft_putchar('A');
			}
			else if ((x == max_x && y == 1) || (x == 1&& y == max_y) )
			{
				ft_putchar('C');
			}
			else if (x == 1 || x == max_x)
			{
				ft_putchar('B');
			}
			else if (y == 1 || y == max_y)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			x++;
		}
		y++;
		x = 1;
		ft_putchar('\n');
	}
}

