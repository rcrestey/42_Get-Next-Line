/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niogden <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 18:46:23 by niogden           #+#    #+#             */
/*   Updated: 2018/11/13 18:48:36 by niogden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		a;
	char	c;

	a = ft_strlen(str) - 1;
	i = 0;
	while (i < a)
	{
		c = str[i];
		str[i] = str[a];
		str[a] = c;
		a--;
		i++;
	}
	return (str);
}
