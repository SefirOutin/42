/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:34:49 by soutin            #+#    #+#             */
/*   Updated: 2023/02/14 14:49:33 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	buffer;

	i = 0;
	size = size - 1;
	while (i < size)
	{
		buffer = tab[i];
		tab[i] = tab[size];
		tab[size] = buffer;
		i++;
		size--;
	}
}

int	main()
{
	int	h[] = {1, 2, 3, 4, 5, 6};
	ft_rev_int_tab(h, 6);
	printf("%d%d%d%d%d%d\n", h[0], h[1], h[2], h[3], h[4], h[5]);
}
