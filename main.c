/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 17:06:35 by tlorine           #+#    #+#             */
/*   Updated: 2019/04/14 20:18:09 by tlorine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	int num;

	if (argc != 3)
		return (0);
	if (ft_strcmp(argv[1], "ft_itoa") == 0)
	{
		num = atoi(argv[2]);
		printf("ft_itoa : %s\n", ft_itoa(num));
		printf("atoi : %d\n", num);
	}
	if (ft_strcmp(argv[1], "ft_atoi") == 0)
	{
		printf("ft_Atoi : %d\n", ft_atoi(argv[2]));
		printf("atoi : %d\n", atoi(argv[2]));
	}
}
