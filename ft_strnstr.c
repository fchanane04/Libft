/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 02:17:59 by fchanane          #+#    #+#             */
/*   Updated: 2021/11/27 22:48:14 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		n;
	char		*h;

	i = 0;
	h = (char *)haystack;
	if (needle[0] == '\0')
		return (h);
	n = ft_strlen(needle);
	while ((haystack[i] != '\0') && (i < len))
	{
		if (!(ft_strncmp(&haystack[i], needle, n)))
			return (&h[i]);
		else
			i ++;
		if (i + n > len)
			break ;
	}
	return (NULL);
}
