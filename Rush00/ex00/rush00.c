/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaidano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:59:42 by dkaidano          #+#    #+#             */
/*   Updated: 2023/02/12 15:22:37 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char a);

void	ft_first_l(int c, int x)
{
	while (c <= x)
	{
		if (c == 1)
		{
			ft_putchar('o');
			if (x == 1)
			{
				ft_putchar('\n');
			}
		}
		else if (c > 1 && c < x)
		{
			ft_putchar('-');
		}
		else if (c == x)
		{
			ft_putchar('o');
			ft_putchar('\n');
		}
		c++;
	}
}

void	ft_middle_l(int c, int x)
{
	while (c <= x)
	{
		if (c == 1)
		{
			ft_putchar('|');
			if (x == 1)
			{
				ft_putchar('\n');
			}
		}
		else if (c > 1 && c < x)
		{
			ft_putchar(' ');
		}
		else if (c == x)
		{
			ft_putchar('|');
			ft_putchar('\n');
		}
		c++;
	}
}

void	ft_last_l(int c, int x)
{
	while (c <= x)
	{
		if (c == 1)
		{
			ft_putchar('o');
			if (x == 1)
			{
				ft_putchar('\n');
			}
		}
		else if (c > 1 && c < x)
		{
			ft_putchar('-');
		}
		else if (c == x)
		{
			ft_putchar('o');
			ft_putchar('\n');
		}
		c++;
	}
}

void	rush(int x, int y)
{
	int	c;
	int	l;

	c = 1;
	l = 1;
	if (x <= 0 || y <= 0 || x > 50 || y > 50)
	{
		write(1, "Error, numbers must be between 1 & 50\n", 38);
	}
	while (l <= y)
	{
		if (l == 1)
		{
			ft_first_l(c, x);
		}
		else if (l > 1 && l < y)
		{
			ft_middle_l(c, x);
		}
		else if (l == y)
		{
			ft_last_l(c, x);
		}
		l++;
	}
}
