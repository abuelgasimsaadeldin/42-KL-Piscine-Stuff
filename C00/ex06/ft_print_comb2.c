/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadeld <asaadeld@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:07:17 by asaadeld          #+#    #+#             */
/*   Updated: 2022/08/18 20:31:06 by asaadeld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	int_to_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	number;
	int	counter;

	number = 0;
	counter = 0;
	while (number < 100)
	{
		counter = number + 1;
		while (counter < 100)
		{
			int_to_char(number / 10 + '0');
			int_to_char(number % 10 + '0');
			int_to_char(' ');
			int_to_char(counter / 10 + '0');
			int_to_char(counter % 10 + '0');
			if ((number / 10 != 9) || (number % 10 != 8))
			{
				int_to_char(',');
				int_to_char(' ');
			}
			counter++;
		}
		number++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
