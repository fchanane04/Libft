/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:50:43 by fchanane          #+#    #+#             */
/*   Updated: 2021/11/19 03:25:28 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		a;
	char	*str;

	str = (char *)s;
	a = ft_strlen(s);
	while (a >= 0)
	{
		if (str[a] == (char)c)
			return (&str[a]);
		a--;
	}
	return (0);
}
