/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadeld <asaadeld@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 02:07:05 by asaadeld          #+#    #+#             */
/*   Updated: 2022/08/22 02:07:08 by asaadeld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write (1, &str[i], 1);
		i++;
	}
}

/*
int	main(void)
{
	char	str[] = "Hello World!";

	ft_putstr(str);
	return (0);
}
*/
