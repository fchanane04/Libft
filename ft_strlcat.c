/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:57:40 by fchanane          #+#    #+#             */
/*   Updated: 2021/11/23 20:37:03 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	i;

	if (!dstsize)
		return (ft_strlen(src));
	d = ft_strlen(dst);
	i = 0;
	if (dstsize <= d)
		return (dstsize + ft_strlen(src));
	while (src[i] != '\0' && d + 1 < dstsize)
	{
		dst[d] = src[i];
		i++;
		d++;
	}
	dst[d] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
