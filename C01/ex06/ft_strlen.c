/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadeld <asaadeld@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:45:01 by asaadeld          #+#    #+#             */
/*   Updated: 2022/08/21 23:51:44 by asaadeld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != 0)
	{
		counter++;
	}
	return (counter);
}

/*
int	main(void)
{
	char	str[] = "Hello World!";

	int count = ft_strlen(str);
	printf("This is the word count: %d", count);
	return (0);
}
*/
