/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:33:33 by fchanane          #+#    #+#             */
/*   Updated: 2021/11/27 22:54:04 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	conv;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	conv = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == conv)
			return (((unsigned char *)str + i));
		i++;
	}
	return (NULL);
}
