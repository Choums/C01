/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caidel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 15:32:43 by caidel            #+#    #+#             */
/*   Updated: 2020/07/04 17:01:49 by caidel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	s;
	int	j;

	s = 0;
	i = 0;
	while (i < (size - 1))
	{
		j = 0;
		while (j < (size - i - 1))
		{
			if (tab[j] > tab[j+1])
			{
				s = tab[j+1];
				tab[j+1] = tab[j];
				tab[j] = s;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int tab[] = {3, 2, 1, 5, 4};

	ft_sort_int_tab(tab, 5);
	
	for(int i = 0; i < 5; i++)
	{
		printf("%d ", tab[i]);
	}

	return 0;
}
