/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qlines.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorine <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 17:35:26 by tlorine           #+#    #+#             */
/*   Updated: 2019/04/11 18:49:57 by tlorine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_qlines(char const *s, char c)
{
	int i;
	int g;

	i = 0;
	g = 0;
	while(s[i] != '\0')
	{
		while(s[i] != c && s[i] != '\0')
		{  
			i++;
			if (s[i] == c || s[i] == '\0')
				g++;
		}
		while(s[i] == c)
			i++;
	}
	return(g);
}