/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 20:34:27 by tlorine           #+#    #+#             */
/*   Updated: 2019/04/12 21:19:12 by tlorine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int				i;
	int				minus;
	long long int	nb;

	i = 0;
	nb = 0;
	minus = 1;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\r' || str[i] == '0'
	|| str[i] == ' ' || str[i] == '\n' || str[i] == '\f')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		minus = minus * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + str[i] - '0';
		i++;
	}
	return (nb * minus);
}
