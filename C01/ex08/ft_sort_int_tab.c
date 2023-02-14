/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:52:33 by soutin            #+#    #+#             */
/*   Updated: 2023/02/14 18:13:35 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	buf;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i+1])
		{
			buf = tab[i];
			tab[i] = tab[i+1];
			tab[i+1] = buf;
		}
		i++;
	}
}

int	main(void)
{
	int	h[]= {8, 58, -5, 0, 8, 12};

	ft_sort_int_tab(h, 6);
	printf("%d %d %d %d %d %d", h[0], h[1], h[2], h[3], h[4], h[5]);
}
