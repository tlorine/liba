/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 14:29:54 by tlorine           #+#    #+#             */
/*   Updated: 2019/04/12 20:01:08 by tlorine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (!s1 || !s2 || !n)
		return (0);
	while ((s1[i] == s2[i]) || (n == 0))
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (1);
		i++;
		if (i >= n)
			return (1);
	}
	return (0);
}