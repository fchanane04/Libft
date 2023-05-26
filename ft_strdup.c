/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 02:08:59 by fchanane          #+#    #+#             */
/*   Updated: 2021/11/19 02:14:27 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	char			*ptr;
	unsigned int	i;

	ptr = malloc (ft_strlen(s1) + 1);
	i = 0;
	if (ptr)
	{
		while (s1[i])
		{
			ptr[i] = (char)s1[i];
			i++;
		}
	ptr[i] = '\0';
	}
	return (ptr);
}
