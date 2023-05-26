/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:38:33 by fchanane          #+#    #+#             */
/*   Updated: 2021/11/27 22:53:35 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char			*s;
	char			*d;

	s = (char *)src;
	d = (char *)dest;
	if (d > s)
	{
		while (size--)
			d[size] = s[size];
	}
	else
		ft_memcpy(dest, src, size);
	return (dest);
}
